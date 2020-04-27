/* 
 * uart/src/uart_putc.c
 * one byte payload sending
 * author 
 */

#include <uart/include/uart.h>

void uart_putc(uInt8_t payload)
{
    /* TODO */	
    while(uart_tx_busy());
    TXREG=payload;
}
