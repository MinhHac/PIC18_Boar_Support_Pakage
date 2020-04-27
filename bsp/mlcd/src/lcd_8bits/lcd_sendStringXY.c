#include <mlcd/include/lcd.h>

void lcd_sendStringXY(char *str, unsigned char row, unsigned char col){
    lcd_sendCommand((unsigned char)((row==1?0x80:0xC0)+col-1));
    lcd_sendString(str);
}

    