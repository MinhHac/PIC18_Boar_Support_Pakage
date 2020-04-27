#ifndef _EEPROM_EX_H
#define _EEPROM_EX_H
#include <spi/include/spi.h>

#define READ        0x03
#define WRITE       0x02
#define WRDI        0x04
#define WREN        0x06
#define RDSR        0x05
#define WRSR        0x01

void EepromEx_25LCxxx_WriteByte(uInt16_t add,uInt8_t data);
uInt8_t EepromEx_25LCxxx_WritePage(uInt16_t add, uInt8_t *str);
void EepromEx_25LCxxx_Read(uInt16_t add,uInt8_t *data);
uInt8_t EepromEx_25LCxxx_WIP(void);

#define EepromEx_25LCxxx_Init(x,mode)    spi_init(x,mode)

#endif