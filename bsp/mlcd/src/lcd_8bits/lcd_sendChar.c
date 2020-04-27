#include <mlcd/include/lcd.h>

void lcd_sendChar(char data){
    if(data == '\r'){
      lcd_sendCommand(LCD_COMMAND_RETURN);
    }else if(data == '\n'){
      lcd_sendCommand(LCD_COMMAND_SECONDROW);
    }else{
    //LCD_RW = 0; // Write, cf lcd.h if RW alway connect to ground
    LCD_RS = 1; // seclect registre for command
    LCD_DATA = data;
    PULSE_EN;
    Delay_2ms(); 
    }
}