/*
 * brief : select cursor position and send string
 * author : hugo descoubes
 */

#include <lcd/include/lcd.h>

void lcd_cursor(unsigned char row, unsigned char col);

/*
 * select cursor position and send string
 */
void lcd_string_cursor(unsigned char row, unsigned char col, char *str){

    lcd_cursor(row, col);

    lcd_string(str);
}