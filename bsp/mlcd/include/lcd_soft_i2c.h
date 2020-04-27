#ifndef _LCD_SOFT_I2C_H_
#define _LCD_SOFT_I2C_H_
/*-----------------------------------------------------------------------------
* Includes
*------------------------------------------------------------------------------
*/
#include <common/include/common.h>
#include <common/include/delay.h>
#include <i2c/include/soft_i2c.h>


/* lcd parameters */
#define   SLAVE_ADD          0x4E
#define   SLAVE_DATA_ADD     0x27


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


                 
/* user API reference */

void lcd_soft_i2c_init(uInt8_t slave_Add, uInt8_t data_Add);
void lcd_soft_i2c_sendChar(uInt8_t data,uInt8_t slave_Add,uInt8_t data_Add);
void lcd_soft_i2c_sendCommand(uInt8_t data,uInt8_t slave_Add,uInt8_t data_Add);
void lcd_soft_i2c_sendString(char *str,uInt8_t slave_Add,uInt8_t data_Add);
void lcd_soft_i2c_gotoXY(uInt8_t row, uInt8_t col,uInt8_t slave_Add,uInt8_t data_Add);
void lcd_soft_i2c_sendStringXY(uInt8_t *str,uInt8_t row, uInt8_t col,uInt8_t slave_Add,uInt8_t data_Add);

#endif