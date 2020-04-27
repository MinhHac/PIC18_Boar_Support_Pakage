/*
 * uart/src/uart_init.c
 * uart1 configuration
 * author 
 */

#include <uart/include/uart.h>

/* TODO */	

void uart_init(uInt32_t bdrate)
{
    
    
    /*Vide registre de RCREG*/
    uInt8_t flush;
    flush = RCREG;
    flush = RCREG;
    /*Pins*/
    TRISCbits.TRISC6 = 0;
    TRISCbits.TRISC7 = 1;
    
    /*Transmit status control*/
    TXSTA = 0b00100100;
    
    /*Receive status control*/
    RCSTA = 0b10010000;

    /*LA vitesse de Baud*/
    BAUDCONbits.BRG16 = 1;
    uInt16_t val = (Fosc/bdrate-1);
    //SPBRGH=(uInt8_t)(val>>8);
    //SPBRG = (uInt8_t) val;
    SPBRG = val;//0x0340;

    /*Disable de transition interrupt*/
    PIE1bits.TXIE = 0;
    
    /*Interruption de reception*/
    PIR1bits.RCIF = 0;
    PIE1bits.RCIE = 1;
    IPR1bits.RCIP = 0;
    
    /*control flux par logiciel*/
    uart_putc(UART_XON); 
    /*initialise pour le BUffer circulaire*/
    buffer_RX.idx_read = 0;
    buffer_RX.idx_write = 0;
    buffer_RX.nb_elt = 0;
    
}
