#ifndef _SD_CARD
#define _SD_CARD
#include <spi/include/spi.h>
#include <common/include/delay.h>

//==============================================================================
/* Pin GPIO + SPI pins in spi.h*/
#define SD_CS_DIR        TRISCbits.TRISC2  // seconde slave

#define SD_SPI_CS        LATCbits.LATC2

#define Blocklen                      64		// lenght of data (byte)
//==============================================================================


uInt16_t timeout;
enum _card_type{MMC, SDSC, SDHC} g_card_type;
typedef enum {
  sdcard_goodec      = 0, 
  sdcard_idle        = 0x01, 
  sdcard_cmd1_err    = 0x02,
  sdcard_timeout     = 0x80,
  sdcard_illegal_cmd = 0x04 
}sdcard_err;

#define CMD0  0x00  // reset, set Idle state
#define CMD1  0x01  // get card status command
#define CMD16 0x10 // set block data length (count by byte) 
#define CMD17 0x11 // read 1 block data from CARD
#define CMD24 0x18 // write 1 block data to CARD

#define sd_spi_start_write()          SD_SPI_CS = 0;
#define sd_spi_stop_write()           SD_SPI_CS = 1;

#define sd_select()                   SD_SPI_CS = 0;
#define sd_deselect()                 SD_SPI_CS = 1; //spi_write(0xFF);}

sdcard_err sdcard_init(void);
uInt8_t sdcard_reponse_err(uInt8_t reponse);
void sdcard_send_command(uInt8_t command, uInt32_t sd_data,uInt8_t sd_crc);
sdcard_err sdcard_write_byte(uInt32_t Address, uInt8_t *buff);
sdcard_err sdcard_read_byte(uInt32_t Address, uInt8_t *buff);
sdcard_err sdcard_write_block(uInt16_t num_block, uInt8_t *buff);
sdcard_err sdcard_read_block(uInt16_t num_block, uInt8_t *buff);
#endif