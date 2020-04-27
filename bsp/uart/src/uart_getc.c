/*
 * uart/src/uart_getc.c
 * one byte payload receiving
 * author 
 */

#include <uart/include/uart.h>

void uart_isr_process(void) {
    /* TODO */
    uInt8_t lost;

    if (PIR1bits.RCIF) {
        PIR1bits.RCIF = 0;
        if(RCSTAbits.OERR){
            RCSTAbits.CREN =0;
            NOP();
            RCSTAbits.CREN =1;
        }else if (buffer_RX.nb_elt < UART_CIRC_BUFF_SIZE) {

            buffer_RX.buffer[buffer_RX.idx_write] = RCREG;
            buffer_RX.idx_write++;
            buffer_RX.nb_elt++;

            if (buffer_RX.idx_write >= UART_CIRC_BUFF_SIZE) {
                buffer_RX.idx_write = 0;
            }
            /* if (buffer_RX.nb_elt == (UART_CIRC_BUFF_SIZE - 4)) {
                while (uart_tx_busy());
                TXREG = UART_XOFF;
            }*/

        } else {
            lost = RCREG;
        }
    }
}

uInt8_t uart_getc(uInt8_t *payload, uInt8_t echo) {
    /* TODO */
    if (uart_rx_ready()) {
        *payload = buffer_RX.buffer[buffer_RX.idx_read];
        buffer_RX.idx_read++;
        buffer_RX.nb_elt--;
        if (buffer_RX.idx_read >= UART_CIRC_BUFF_SIZE) {
            buffer_RX.idx_read = 0;
        }
        if (echo) {
            if (*payload == '\r'||*payload=='\n') {
                uart_putc('\n');
                uart_putc('\r');
            }
            uart_putc(*payload);
        }
       /* if (buffer_RX.nb_elt == (UART_CIRC_BUFF_SIZE << 1)) {
            while (uart_tx_busy());
            TXREG = UART_XON;
        }*/
        return (1);
    } else {
        /*buffer est plein*/
        return (0);
    }
}
