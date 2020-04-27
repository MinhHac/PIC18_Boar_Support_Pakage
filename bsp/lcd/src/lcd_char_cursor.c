/*
 * brief : select cursor position and send caracter
 * author : hugo descoubes
 */
 
#include <lcd/include/lcd.h>

void lcd_cursor(unsigned char row, unsigned char col);

/*
 * select position and send caracter
 */
void lcd_char_cursor(unsigned char row, unsigned char col, char data){

    lcd_cursor(row, col);

    lcd_char(data);
}