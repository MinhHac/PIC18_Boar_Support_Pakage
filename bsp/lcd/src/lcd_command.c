/*
 * brief : send command
 * author : hugo descoubes
 */

#include <lcd/include/lcd.h>

void lcd_gpio_driver(char DR_or_IR, char data_or_command);

/*
 * send command
 */
void lcd_command(char cmd){

    lcd_gpio_driver(REG_IR, cmd);

    Delay_1ms();
    Delay_1ms();
}
