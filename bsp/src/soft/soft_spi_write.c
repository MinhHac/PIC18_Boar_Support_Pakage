#include <spi/include/soft_spi.h>

void soft_spi_write(uInt8_t data) {
    uInt8_t i, mask =0x80;
    SPI_CS_M = 0;
    for (i = 0; i < 8; i++) {
        if (data & mask)            
            SPI_MOSI_M = 1;
        else 
            SPI_MOSI_M = 0;

        SPI_SCK_M = 1;
        NOP();
        SPI_SCK_M = 0;    
        mask>>=1;
        NOP();
    }
}
