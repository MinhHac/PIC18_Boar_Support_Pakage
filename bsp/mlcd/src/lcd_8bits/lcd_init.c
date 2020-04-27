#include <mlcd/include/lcd.h>
/* if use lcd_init() in a Task periode < 50ms, divise lcd_init() by 2 fonctions*/

void lcd_init(void){
    
    /*Pins gpio*/
    //LCD_POWER_OUT = 0;            
    LCD_EN_OUT = 0;
    LCD_RS_OUT = 0;
    LCD_DATA_OUT = 0x00;

    /* initialisation */
    Delay_40ms();			
    lcd_sendCommand(0b00110000);
    Delay_5ms();	
    lcd_sendCommand(0b00110000);
    Delay_1ms();	
    lcd_sendCommand(0b00110000);

    /* configuration */
    lcd_sendCommand(0b00111000);    // 8bits interface, 2 lines, 5x8 dots
    lcd_sendCommand(0b00001100);    // display on
    lcd_sendCommand(0b00000001);    // clear display                                                         // cursor display shift :   0b0001 0000 + options (S/C=8, R/L=4)
    lcd_sendCommand(0b00000110);    // increment, no display shift
    
    Delay_1ms();
    lcd_sendCommand(LCD_COMMAND_RETURN); // return home
    Delay_1ms();
}