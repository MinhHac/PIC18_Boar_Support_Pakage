/* 
 * uart1/src/uart1_puts.c
 * send caracters string
 * author 
 */

#include <uart/include/uart.h>
#include <string.h>

void uart_puts(const uInt8_t *str)
{
    /* TODO */	
    int i =0;
    while(str[i]!='\0'){
        uart_putc(str[i]);
        i++;
    }
}
