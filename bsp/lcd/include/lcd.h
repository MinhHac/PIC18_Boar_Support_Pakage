/*
 * brief : application lcd header file
 * author : hugo descoubes
 */

#ifndef   __LCD__
#define   __LCD__

    //#include <common/>
    #include <common/include/common.h>
    #include <common/include/delay.h>

	
	/* TO PORT - application board gpio dependencies */
    #define	E_OUTPUTPIN_LCD         TRISEbits.RE1
    #define	RS_OUTPUTPIN_LCD        TRISEbits.RE0
    #define	DATA_OUTPUTPORT_LCD     TRISD
	#define	E_PIN_LCD               LATEbits.LATE1
	#define RS_PIN_LCD              LATEbits.LATE0
	#define DATAS_PIN_LCD           LATD
	
    /* display parameters */
    #define   ROW_NB       2 
    #define   COLUMN_NB    16
    #define   REG_IR       0       
    #define   REG_DR       1 

    /* command set */
    #define	LCD_COMMAND_CLEAR      0x01    // Clear screen and home cursor
    #define	LCD_COMMAND_HOME       0x02    // Home cursor 
    #define	LCD_COMMAND_BACKSPACE  0x10    // Move cursor left one
    #define	LCD_COMMAND_FWDSPACE   0x14    // Move cursor right one
    #define	LCD_COMMAND_PANLEFT    0x18    // Move screen left one
    #define	LCD_COMMAND_PANRIGHT   0x1C    // Move screen right one
    #define	LCD_COMMAND_CURSOROFF  0x0C    // clear cursor
    #define	LCD_COMMAND_SECONDROW  0xC0    // go to second row

    /* user API reference */
    void lcd_char(char data);
    void lcd_string(char *str);
    void lcd_command(char cmd);
    void lcd_char_cursor(unsigned char row, unsigned char col, char data);
    void lcd_string_cursor(unsigned char row, unsigned char col, char *str);
    void lcd_init(void);

#endif
