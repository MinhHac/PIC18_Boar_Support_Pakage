#include <mlcd/include/lcd_4bits.h>
/* if use lcd_init() in a Task periode < 50ms, divise lcd_init() by 2 fonctions*/

void lcd4_init(void){
    
    /*Pins gpio*/
    //LCD_POWER_OUT = 0;            
    LCD_EN_OUT = 0;
    LCD_RS_OUT = 0;
    LCD_DATA_OUT &= 0x0F;  // mode 4 bits 4567 outputs

    LCD_RS = 0; // seclect registre for command
    LCD_EN = 0;
    /* initialisation */
    Delay_20ms();			
    LCD_DATA = 0x30|(LCD_DATA&0x0F);PULSE_EN;
    //lcd4_sendCommand(0x03);
    Delay_5ms();	
    LCD_DATA = 0x30|(LCD_DATA&0x0F);PULSE_EN;
    Delay_5ms();	
    LCD_DATA = 0x30|(LCD_DATA&0x0F);PULSE_EN;
    Delay_20ms();
    /* configuration */
    LCD_DATA = 0x20|(LCD_DATA&0x0F);PULSE_EN;    
    Delay_5ms();

    lcd4_sendCommand(0x28);
    lcd4_sendCommand(0x08);
    
    lcd4_sendCommand(0x01); // clear display 
    
    lcd4_sendCommand(0x0E);
    lcd4_sendCommand(0x06); // increment, no display shift
    lcd4_sendCommand(0x0C);
    
}