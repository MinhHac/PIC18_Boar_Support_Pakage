#ifndef _SOFT_I2C_H
#define _SOFT_I2C_H

#include <common/include/common.h>
#include <common/include/delay.h>

//define IO pin for i2c communicate
#define    SCL_PIN      PORTCbits.RC1  //RC1
#define    SDA_PIN      PORTCbits.RC0
 
#define    SCL_TRIS    TRISCbits.TRISC1
#define    SDA_TRIS    TRISCbits.TRISC0




#define ACK            0
#define NACK           1

#define I2C_READ       0x01
#define I2C_WRITE      0x00

#define Soft_I2c_Delay()	{NOP();NOP();NOP();NOP();NOP();NOP();NOP();NOP();NOP();NOP();}
#define Soft_I2c_Init()       {SDA_TRIS=1; SDA_TRIS = 1;}


void soft_i2c_start(void);
 
void soft_i2c_stop(void);

void soft_i2c_restart();
 
uInt8_t Soft_I2c_Get_Ack(void);



void soft_i2c_read(uInt8_t ack, uInt8_t *data);

void soft_i2c_Master_Read_Byte(uInt8_t slave_add, uInt8_t data_add, uInt8_t *data);

void soft_i2c_Master_Read_Multi_Bytes(uInt8_t slave_add, uInt8_t data_add, uInt8_t n, uInt8_t *data);



uInt8_t soft_i2c_write(unsigned char data_send);

void soft_i2c_Master_Write_Byte(uInt8_t slave_add, uInt8_t data_add, uInt8_t data);


#endif