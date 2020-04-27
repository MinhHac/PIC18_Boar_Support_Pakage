#include <mlcd/include/lcd_4bits.h>

void lcd4_sendString(char *str){
    while(*str) {
        lcd4_sendChar(*str++);
    }
}