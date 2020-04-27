#include <EepromEx_25LCxxx/include/Soft_EepromEx_25LCxxx.h>

void soft_EepromEx_25LCxxx_Read(uInt16_t add,uInt8_t *data){

    SPI_CS_M = 0;
    soft_spi_write(READ);
    soft_spi_write(add>>8);
    soft_spi_write(add&0x00FF);
    soft_spi_read(data);
    SPI_CS_M = 1;
    NOP();
}