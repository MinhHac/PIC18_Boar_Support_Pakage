#include <EepromEx_25LCxxx/include/Soft_EepromEx_25LCxxx.h>

void soft_EepromEx_25LCxxx_WriteByte(uInt16_t add,uInt8_t data){
    SPI_CS_M = 0;
    soft_spi_write(WREN);
    SPI_CS_M = 1;
    NOP();
    SPI_CS_M = 0;
    soft_spi_write(WRITE);
    soft_spi_write(add>>8);
    soft_spi_write(add&0x00FF);
    soft_spi_write(data);
    SPI_CS_M = 1;
    while(soft_EepromEx_25LCxxx_WIP());
}