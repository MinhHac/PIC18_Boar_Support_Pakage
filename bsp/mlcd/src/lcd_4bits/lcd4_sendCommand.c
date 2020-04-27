#include <mlcd/include/lcd_4bits.h>

void lcd4_sendCommand(char c){
    
    //LCD_RW = 0; // Write, cf lcd.h if RW alway connect to ground
    LCD_RS = 0; // seclect registre for command
    LCD_DATA = (c&0xF0)|(LCD_DATA&0x0F);
    PULSE_EN;
    Delay_1ms();
    LCD_DATA = (c<<4)|(LCD_DATA&0x0F);
    PULSE_EN;
    Delay_2ms();
}