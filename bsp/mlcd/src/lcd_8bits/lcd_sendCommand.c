#include <mlcd/include/lcd.h>

void lcd_sendCommand(char command){
    
    //LCD_RW = 0; // Write, cf lcd.h if RW alway connect to ground
    LCD_RS = 0; // seclect registre for command
    LCD_DATA = command;
    PULSE_EN;
    Delay_2ms();
}