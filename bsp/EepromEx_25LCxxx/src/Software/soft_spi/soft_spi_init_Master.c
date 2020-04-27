#include <spi/include/soft_spi.h>


void soft_spi_init_Master(void){
    
    /* PORT definition for SPI pins*/
    TRISBbits.TRISB5 = 0; // clock
    TRISBbits.TRISB7 = 1; // DIN
    TRISBbits.TRISB6 = 0; // DOUT
    TRISBbits.TRISB4 = 0; // CS
    
    /* To initialize SPI Communication configure following Register*/
    SPI_CS_M = 1;
    SPI_SCK_M  = 0;
   // ADCON0=0;
    ADCON1 = 0x0F;         /*  all pins as digital I/O */
}