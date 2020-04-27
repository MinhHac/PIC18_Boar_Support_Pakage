#include <mlcd/include/lcd.h>

void lcd_gotoXY(unsigned char row, unsigned char col){
    lcd_sendCommand((unsigned char)((row==1?0x80:0xC0)+col-1));
}