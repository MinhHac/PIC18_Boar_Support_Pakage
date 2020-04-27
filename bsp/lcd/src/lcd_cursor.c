/*
 * brief : curcor position
 * author : hugo descoubes
 */

#include <lcd/include/lcd.h>

/*
 * curcor position
 */
void lcd_cursor(unsigned char row, unsigned char col){
    char i;

    lcd_command(LCD_COMMAND_HOME);

    /* limitation */
    if(row >= ROW_NB)
        lcd_command(LCD_COMMAND_SECONDROW); 
    if(col > COLUMN_NB)
        col = COLUMN_NB + 1;

    /* cursor shift */
    for(i=1; i<col; i++)
        lcd_command(LCD_COMMAND_FWDSPACE);		
}	