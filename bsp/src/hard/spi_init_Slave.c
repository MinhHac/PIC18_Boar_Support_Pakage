#include <spi/include/spi.h>

void spi_init_Slave(void){
    
    /* PORT definition for SPI pins*/
    SDI_DIR =1;	    /* RB0 as input(SDI) */
    SCK_DIR=0;		/* RB1 as output(SCK) */
    SS_DIR=0;		/* RA5 as a output(SS') */
    SDO_DIR=0;		/* RC7 as output(SDO) */
    
    /* To initialize SPI Communication configure following Register*/
    CS = 1;
    SSPSTATbits.BF = 0;     /*Buffer Full Status bit = empty*/
    SSPSTATbits.CKE = 1;    /* Polarity of clock state */ 
    SSPCON1=0b00100100;		/* Master mode,Serial enable,
			              	idle state low for clk, fosc/16 */ 
    PIR1bits.SSPIF=0;      /* flag interrup*/    
    ADCON0=0;			   /* This is for de-multiplexed the  SCL and SDI from analog pins*/
    
    ADCON1 = 0x0F;         /*  all pins as digital I/O */
}
