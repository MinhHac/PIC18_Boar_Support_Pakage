#include <EepromEx_25LCxxx/include/EepromEx_25LCxxx.h>

/*Write in prosses*/
uInt8_t EepromEx_25LCxxx_WIP(void){

    uInt8_t RDSR_reg; /* registre status*/
    SPI_CS = 0;
    spi_write(RDSR);
    NOP();
    spi_read(&RDSR_reg);
    SPI_CS = 1;
    
    return RDSR_reg&0x01;
}