#include <mlcd/include/lcd_4bits.h>

void lcd4_sendStringXY(char *str, unsigned char row, unsigned char col){
    lcd4_sendCommand((unsigned char)((row==1?0x80:0xC0)+col-1));
    lcd4_sendString(str);
}

    