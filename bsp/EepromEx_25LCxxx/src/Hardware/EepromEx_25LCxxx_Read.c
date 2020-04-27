#include <EepromEx_25LCxxx/include/EepromEx_25LCxxx.h>

void EepromEx_25LCxxx_Read(uInt16_t add,uInt8_t *data){

    SPI_CS = 0;
    spi_write(READ);
    spi_write(add>>8);
    spi_write(add&0x00FF);
    spi_read(data);
    SPI_CS = 1;
    NOP();
}