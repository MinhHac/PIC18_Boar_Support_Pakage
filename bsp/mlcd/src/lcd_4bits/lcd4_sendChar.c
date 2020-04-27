#include <mlcd/include/lcd_4bits.h>

void lcd4_sendChar(char data) {
    if (data == '\r') {
        lcd4_sendCommand(LCD_COMMAND_RETURN);
    } else if (data == '\n') {
        lcd4_sendCommand(LCD_COMMAND_SECONDROW);
    } else {
        //LCD_RW = 0; // Write, cf lcd.h if RW alway connect to ground
        LCD_RS = 1; // seclect registre for write
        LCD_DATA = (data & 0xF0) | (LCD_DATA & 0x0F);
        PULSE_EN;
        Delay_1ms();
        LCD_DATA = (data << 4) | (LCD_DATA & 0x0F);
        PULSE_EN;
        Delay_2ms();
    }
}