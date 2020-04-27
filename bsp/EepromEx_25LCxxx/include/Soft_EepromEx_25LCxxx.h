#ifndef _S_EEPROM_EX_H
#define _S_EEPROM_EX_H
#include <spi/include/soft_spi.h>

#define READ        0x03
#define WRITE       0x02
#define WRDI        0x04
#define WREN        0x06
#define RDSR        0x05
#define WRSR        0x01

void soft_EepromEx_25LCxxx_WriteByte(uInt16_t add,uInt8_t data);
uInt8_t soft_EepromEx_25LCxxx_WritePage(uInt16_t add, uInt8_t *str);
void soft_EepromEx_25LCxxx_Read(uInt16_t add,uInt8_t *data);
uInt8_t soft_EepromEx_25LCxxx_WIP(void);

#define soft_EepromEx_25LCxxx_Init()    soft_spi_init_Master()

#endif