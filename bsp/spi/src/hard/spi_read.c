#include <spi/include/spi.h>

void spi_read(uInt8_t *payload)
{    
    SSPBUF=0xff;		/* Copy flush byte in SSBUF */
    while(!PIR1bits.SSPIF);	/* Wait for complete 1 byte transmission */
    PIR1bits.SSPIF=0;
    *payload = SSPBUF;
}