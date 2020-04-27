#include <mlcd/include/lcd_4bits.h>

void lcd4_gotoXY(unsigned char row, unsigned char col){
    lcd4_sendCommand((unsigned char)((row==1?0x80:0xC0)+col-1));
}