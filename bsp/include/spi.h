#ifndef _SPI_H
#define _SPI_H
#include <common/include/common.h>


//==============================================================================

/*pin seclect*/
#define SPI_CS     LATAbits.LATA5
#define SS_DIR     TRISAbits.TRISA5
//==============================================================================

/*GPIO Direction*/
#define SDI_DIR    TRISBbits.TRISB0
#define SCK_DIR    TRISBbits.TRISB1


#define SDO_DIR    TRISCbits.TRISC7


typedef enum {
    SPI_MODE_0 = 0,
    SPI_MODE_1 = 1,
    SPI_MODE_2 = 2,
    SPI_MODE_3 = 3
}spi_mode;
typedef enum {
    SPI_SLAVE = 0,
    SPI_MASTER = 1,
}spi_Master_Slave;

#define spi_start_write()          SPI_CS = 0;
#define spi_stop_write()           SPI_CS = 1;

void spi_init_Master(void);
void spi_init_Slave(void);
void spi_write(uInt8_t data);
void spi_read(uInt8_t *payload);
void spi_init(spi_Master_Slave x, spi_mode mode) ;
#endif