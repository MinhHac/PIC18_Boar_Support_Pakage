/*
 * brief : send string
 * author : hugo descoubes
 */

#include <lcd/include/lcd.h>

/*
 * send string
 */
void lcd_string(char *str){
    char i=0;

    while(str[i] != '\0')
        lcd_char(str[i++]);				
}
		