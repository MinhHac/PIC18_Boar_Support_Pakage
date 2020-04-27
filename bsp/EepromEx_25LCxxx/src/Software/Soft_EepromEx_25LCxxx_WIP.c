#include <EepromEx_25LCxxx/include/Soft_EepromEx_25LCxxx.h>

/*Write in prosses*/
uInt8_t soft_EepromEx_25LCxxx_WIP(void){

    uInt8_t RDSR_reg; /* registre status*/
    SPI_CS_M = 0;
    soft_spi_write(RDSR);
    NOP();
    soft_spi_read(&RDSR_reg);
    SPI_CS_M = 1;
    
    return RDSR_reg&0x01;
}