#include <EepromEx_25LCxxx/include/Soft_EepromEx_25LCxxx.h>

uInt8_t soft_EepromEx_25LCxxx_WritePage(uInt16_t add, uInt8_t *str) {

    uInt8_t i = 0;

    SPI_CS_M = 0;
    soft_spi_write(WREN);
    SPI_CS_M = 1;
    NOP();
    SPI_CS_M = 0;
    soft_spi_write(WRITE);
    soft_spi_write(add >> 8);
    soft_spi_write(add & 0x00FF);

    while (str[i] != '\0') {
         if (i < 64) {
             soft_spi_write(str[i]);
             i++;
         }else{
             SPI_CS_M = 1;
             return 0;
         }
     }
    
    SPI_CS_M = 1;
    return 1;
}