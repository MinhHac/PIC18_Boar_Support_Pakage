
/*Common*/
#include <common/include/pic18f4550_config.h>
#include <common/include/common.h>
#include <common/include/delay.h>

/*Base*/
#include <gpio/include/button.h>
#include <timer0/include/timer0.h>
#include <uart/include/uart.h>


/* I2C*/
#include <i2c/include/i2c.h>
#include <i2c/include/soft_i2c.h>

/*Interface LCD*/
//#include <mlcd/include/lcd.h>
//#include <mlcd/include/lcd_4bits.h>
#include <mlcd/include/lcd_i2c.h>
//#include <i2c/include/soft_i2c.h>

/*Interface EEPROM-SPI*/
#include <spi/include/spi.h>
#include <EepromEx_25LCxxx/include/EepromEx_25LCxxx.h>

#include <spi/include/soft_spi.h>
#include <EepromEx_25LCxxx/include/Soft_EepromEx_25LCxxx.h>


/*TFT LCD 240*320 */
#include <tft_lcd_28/include/tft_lcd.h>
#include <sdcard/include/sdcard.h>

/*Scheduler co-operative*/
#include <schedulercooperative/include/scheduler_cp.h>












