/*
 * test program for gpio library - picsimlab McLab2/Board 3 project 
 * author : hugo descoubes
 */

#include <bsplib.h>


/* 
 * main entry point
 */

void main() {
    buttons_init();
    lcd_init();
    static bit a = 0,b=0;

     
    while (1) {

        if(button_StartOrStop_read()==1&&a==1){
           
            lcd_sendString(" MINH HAC HO");
            a=0;
             
        } else if(button_StartOrStop_read()==0){
            a = 1;
        }
        
        if(button_Reset_read()==1&b==1){
             lcd_sendCommand(LCD_COMMAND_CLEAR);
             b = 0;
        } else if(button_Reset_read()==0){
            b = 1;
        }
    }
}

