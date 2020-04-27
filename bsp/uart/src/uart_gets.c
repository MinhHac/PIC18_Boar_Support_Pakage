   /*
 * uart/src/uart_gets.c
 * caracters string receiving
 * author 
 */

#include <uart/include/uart.h>
//#include <stdio.h>

static uInt8_t index = 0;

uInt8_t uart_gets(uInt8_t *str_buf, uInt8_t buf_limit, uInt8_t echo) {
    /* TODO */
       uInt8_t tmp;
       do {
           if (index < buf_limit) {
               if (!uart_getc(&tmp, echo))  {
                   return 0;
               }else{                
                    *(str_buf+index) = tmp;           
                    index++;
               }
           } else {
               *(str_buf+buf_limit) = '\0';
                //uart_puts(str_buf);
                //uart_puts("\r\n");
               index =0;
               return 2; // return 2
           }
       } while (tmp!= '\r');
       *(str_buf+index-1) = '\0';
              // uart_puts(str_buf);
              // uart_puts("\r\n");       
       index=0;
       return 1;
}
