#ifndef _SOFT_SPI_H
#define _SOFT_SPI_H
#include <common/include/common.h>
#include <common/include/delay.h>

/*GPIO Direction*/
/*
#define MISO_DIR    TRISBbits.TRISB0
#define SCK_DIR     TRISBbits.TRISB1
#define SS_DIR      TRISAbits.TRISA5
#define MOSI_DIR    TRISCbits.TRISC7
*/
/*Master pin select*/

#define SPI_SCK_M      LATBbits.LATB5
#define SPI_MISO_M     PORTBbits.RB7 //MISO
#define SPI_MOSI_M     LATBbits.LATB6 //MOSI
#define SPI_CS_M       LATBbits.LATB4


void soft_spi_init_Master(void);
void soft_spi_init_Slave(void);
void soft_spi_write(uInt8_t data);
void soft_spi_read(uInt8_t *payload);
//void soft_spi_init(spi_Master_Slave x, spi_mode mode) ;

#endif