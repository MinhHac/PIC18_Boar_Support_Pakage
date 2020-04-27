/*
 * test program for lcd library - picsimlab McLab2/Board 3 project
 * author : hugo descoubes
 */

#include <bsplib.h>

char str_hello[] = "Liên chó ?iên!";
char str_byebye[] = "Bye Bye !";

/* 
 * main entry point
 */
void main() {
    char i;
 
    /* lcd demo */
    lcd_init();

    lcd_string(str_hello);
    for (i=0; i<96; i++) {
        Delay_200ms();
        lcd_command(LCD_COMMAND_PANRIGHT);
    }
    
    lcd_command(LCD_COMMAND_CLEAR);
    lcd_command(LCD_COMMAND_HOME);
    lcd_string_cursor(2,6,str_byebye);  
 
    /* it's a trap */
    while (1);
}

