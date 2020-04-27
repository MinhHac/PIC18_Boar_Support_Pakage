#include <spi/include/spi.h>

void spi_write(uInt8_t data)
{
    unsigned char data_flush;
    SSPBUF=data;			/* Copy data in SSBUF to transmit */
    while(!PIR1bits.SSPIF);	/* Wait for complete 1 byte transmission */
    PIR1bits.SSPIF=0;		/* Clear SSPIF flag */
    data_flush=SSPBUF;		/* Flush the data */
}