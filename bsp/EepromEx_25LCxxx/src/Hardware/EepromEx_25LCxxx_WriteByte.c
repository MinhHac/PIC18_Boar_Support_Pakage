#include <EepromEx_25LCxxx/include/EepromEx_25LCxxx.h>

void EepromEx_25LCxxx_WriteByte(uInt16_t add,uInt8_t data){
    SPI_CS = 0;
    spi_write(WREN);
    SPI_CS = 1;
    NOP();
    SPI_CS = 0;
    spi_write(WRITE);
    spi_write(add>>8);
    spi_write(add&0x00FF);
    spi_write(data);
    SPI_CS = 1;
    while(EepromEx_25LCxxx_WIP());
}