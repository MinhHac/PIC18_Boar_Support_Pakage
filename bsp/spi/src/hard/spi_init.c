#include <spi/include/spi.h>

void spi_init(spi_Master_Slave x, spi_mode mode) {

    if (x == SPI_MASTER) {
        /* PORT definition for SPI pins*/
        SDI_DIR = 1; /* RB0 as input(SDI) */
        SCK_DIR = 0; /* RB1 as output(SCK) */
        SS_DIR = 0; /* RA5 as a output(SS') */
        SDO_DIR = 0; /* RC7 as output(SDO) */
        /* Master mode,Serial enable,CKP = 0
        idle state low for clk, fosc/16 */
        SSPCON1bits.SSPM0 = 1;
        SSPCON1bits.SSPM1 = 0;
        SSPCON1bits.SSPM2 = 0;
        SSPCON1bits.SSPM3 = 0;
    } else {
        SDI_DIR = 1; /* RB0 as input(SDI) */
        SCK_DIR = 1; /* RB1 as output(SCK) */
        SS_DIR = 1; /* RA5 as a output(SS') */
        SDO_DIR = 0; /* RC7 as output(SDO) */
        
        SSPCON1bits.SSPM0 = 0;
        SSPCON1bits.SSPM1 = 0;
        SSPCON1bits.SSPM2 = 1;
        SSPCON1bits.SSPM3 = 0;
    }
    switch (mode) {
        case SPI_MODE_0:
        {
            SSPSTATbits.CKE = 1; /* Polarity of clock state */
            SSPCON1bits.CKP = 0;
            break;
        }
        case SPI_MODE_1:
        {
            SSPSTATbits.CKE = 0; /* Polarity of clock state */
            SSPCON1bits.CKP = 0;
            break;
        }
        case SPI_MODE_2:
        {
            SSPSTATbits.CKE = 1; /* Polarity of clock state */
            SSPCON1bits.CKP = 1;
            break;
        }
        case SPI_MODE_3:
        {
            SSPSTATbits.CKE = 0; /* Polarity of clock state */
            SSPCON1bits.CKP = 1;
            break;
        }
    }
    
    /* To initialize SPI Communication configure following Register*/
    SPI_CS = 1;

    SSPCON1bits.SSPEN = 1;
    SSPSTATbits.BF = 0; /*Buffer Full Status bit = empty*/
    PIR1bits.SSPIF = 0; /* flag interrup*/
    ADCON0 = 0; /* This is for de-multiplexed the  SCL and SDI from analog pins*/
    ADCON1 = 0x0F; /*  all pins as digital I/O */
}
