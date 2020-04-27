/*
 * brief : lcd initialisation 8bits mode
 * author : hugo descoubes
 */

#include <lcd/include/lcd.h>

/* 
 * lcd initialisation 
 */
void lcd_init(void){
    /* cf. pdf schematic board3 
     * cf. pdf datasheet HD44780U - p24, p25, p45 
     */

    /* gpio configuration */
    DATA_OUTPUTPORT_LCD = 0x00;
    RS_OUTPUTPIN_LCD = 0;
    E_OUTPUTPIN_LCD = 0;

    /* initialisation */
    Delay_40ms();			
    lcd_command(0b00110000);
    Delay_40ms();			
    lcd_command(0b00110000);
    Delay_1ms();	
    Delay_1ms();	
    Delay_1ms();	
    Delay_1ms();	
    Delay_1ms();	
    lcd_command(0b00110000);

    /* configuration */
    lcd_command(0b00111000);    // 8bits interface, 2 lines, 5x8 dots
    lcd_command(0b00001100);    // display on
    lcd_command(0b00000001);    // clear display                                                         // cursor display shift :   0b0001 0000 + options (S/C=8, R/L=4)
    lcd_command(0b00000110);    // increment, no display shift
}
