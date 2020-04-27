/*
 * brief : gpio driver function
 * processing for gpio datas, enable and display driver register bits
 * author : hugo descoubes
 */

#include <lcd/include/lcd.h>

/*
 * processing gpio enable bit and display driver register selection bit
 */
void lcd_gpio_driver(char DR_or_IR, char data_or_command){
    /* cf. pdf schematic board3 
     * cf. pdf datasheet HD44780U - p32, p52, p53, p58
     */
 
    DATAS_PIN_LCD = data_or_command;
 
    RS_PIN_LCD = DR_or_IR;
    {
        E_PIN_LCD = 1;
        Delay_10us();      
        E_PIN_LCD = 0;
    }
    RS_PIN_LCD = 1;
}
