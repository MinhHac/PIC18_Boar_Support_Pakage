#include <EepromEx_25LCxxx/include/EepromEx_25LCxxx.h>

uInt8_t EepromEx_25LCxxx_WritePage(uInt16_t add, uInt8_t *str) {

    uInt8_t i = 0;

    SPI_CS = 0;
    spi_write(WREN);
    SPI_CS = 1;
    NOP();
    SPI_CS = 0;
    spi_write(WRITE);
    spi_write(add >> 8);
    spi_write(add & 0x00FF);

    while (str[i] != '\0') {
         if (i < 64) {
             spi_write(str[i]);
             i++;
         }else{
             SPI_CS = 1;
             return 0;
         }
     }
    
    SPI_CS = 1;
    return 1;
}