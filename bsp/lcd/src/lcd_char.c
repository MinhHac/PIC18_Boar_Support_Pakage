/*
 * brief : send caracter
 * author : hugo descoubes
 */

#include <lcd/include/lcd.h>

void lcd_gpio_driver(char DR_or_IR, char data_or_command);
	
/*
 * send caracter
 */
void lcd_char(char data){

    lcd_gpio_driver(REG_DR, data);

    Delay_1ms();
    Delay_1ms();
}