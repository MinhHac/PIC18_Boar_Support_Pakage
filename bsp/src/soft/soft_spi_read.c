#include <spi/include/soft_spi.h>

void soft_spi_read(uInt8_t *payload){
    uInt8_t i,b;
    for(i=0;i<8;i++){
        b<<=1;
        SPI_SCK_M = 1;
        if(SPI_MISO_M){
            b|=0x01;
        }
        SPI_SCK_M = 0;
    }
    payload = &b;
}