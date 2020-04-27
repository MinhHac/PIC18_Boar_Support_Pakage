#ifndef _LCD_H_
#define _LCD_H_
/*-----------------------------------------------------------------------------
* Includes
*------------------------------------------------------------------------------
*/
#include <common/include/common.h>
#include <common/include/delay.h>

/*-----------------------------------------------------------------------------
 * Have to change the pins that connect to LCD:
 * LCD_Enable ---- RE1
 * LCD_RS     ---- RE0
 * LCD_Data   ---- Port D in mode 8bits, 16x2
 */

/* TO PORT - application board gpio dependencies */
/* pin direction */
//#define LCD_POWER_OUT          TRISEbits.RE2  // facultative
//#define LCD_RW_OUT             TRSIEbits.RE3  // facultative 
//#define LCD_POWER            LATEbits.LATE1  
//#define LCD_RW               LATEbits.LATE0   // 1 read / 0 write

#define	LCD_EN_OUT         TRISEbits.RE1
#define	LCD_RS_OUT         TRISEbits.RE0       // 0 command / 1 data
#define	LCD_DATA_OUT       TRISD               // mode 8 bits
/* pin I/O */
#define	LCD_EN               LATEbits.LATE1
#define LCD_RS               LATEbits.LATE0
#define LCD_DATA             LATD

/* display parameters */
#define   LCD_ROW_NB       2   // 2 rows 
#define   LCD_COLUMN_NB    16  // 16 colums
#define   LCD_REG_IR       0       
#define   LCD_REG_DR       1 

/* command set */
#define	LCD_COMMAND_CLEAR      0x01    // Clear screen and home cursor
#define	LCD_COMMAND_HOME       0x02    // Home cursor 
#define	LCD_COMMAND_BACKSPACE  0x10    // Move cursor left one
#define	LCD_COMMAND_FWDSPACE   0x14    // Move cursor right one
#define	LCD_COMMAND_PANLEFT    0x18    // Move screen left one
#define	LCD_COMMAND_PANRIGHT   0x1C    // Move screen right one
#define	LCD_COMMAND_CURSOROFF  0x0C    // clear cursor
#define	LCD_COMMAND_SECONDROW  0xC0    // go to second row
#define LCD_COMMAND_RETURN     0x80    // return fist colum
/*pulse en*/
#define PULSE_EN LCD_EN = 0;\
                 Nop();     \
                 LCD_EN = 1;
                 
/* user API reference */
void lcd_sendChar(char data);
void lcd_sendString(char *str);
void lcd_sendCommand(char cmd);
void lcd_init(void);

void lcd_gotoXY(unsigned char row, unsigned char col);
void lcd_sendStringXY(char *str, unsigned char row, unsigned char col);


#endif