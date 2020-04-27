#include <mlcd/include/lcd.h>

void lcd_sendString(char *str){
    while(*str) {
        lcd_sendChar(*str);
        str++;
    }
}