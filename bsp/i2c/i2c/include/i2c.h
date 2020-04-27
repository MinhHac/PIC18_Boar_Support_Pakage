#ifndef _I2C_H
#define _I2C_H


#include <common/include/common.h>

#define SCL_DIR TRISBbits.TRISB1 
#define SDA_DIR TRISBbits.TRISB0 

/* API parameters */
//#define I2C_ADD        0x42
#define I2C_BAUDRATE   100000
#define I2C_READ       0x01
#define I2C_WRITE      0x00
#define ACK            0
#define NACK           1
/* API reference */

/**
 * @brief i2c1 configuration
 * @li mode : I2C master, no collision
 * @li pins : SDA input/output connected to xx
 * SCL input/output connected to xx
 * @li protocol : 7 bits address, write only, 8 bits data payload
 * @li misc : slew rate disable, SMBus disable 
 * @li enable : enable module
 */


/*Transmit is in progress*/

#define i2c_Master_Wait()       {while((SSPSTAT&0x04)||(SSPCON2 & 0x1F));}

#define i2c_Master_Start()      {i2c_Master_Wait(); SSPCON2bits.SEN = 1;}

#define i2c_Master_Restart()    {i2c_Master_Wait(); SSPCON2bits.RSEN = 1;}

#define i2c_Master_Stop()       {i2c_Master_Wait(); SSPCON2bits.PEN = 1;}

#define i2c_Ack()               {  SSPCON2bits.ACKDT = ACK;  i2c_Master_Wait();\
                                   SSPCON2bits.ACKEN = 1; }

#define i2c_Nack()              {  SSPCON2bits.ACKDT = NACK; i2c_Master_Wait();\
                                   SSPCON2bits.ACKEN = 1;  }

void i2c_Master_Init(uInt32_t bdrate);

uInt8_t i2c_Master_Write(uInt8_t data);

void i2c_Master_Read(uInt8_t ack, uInt8_t *data);

uInt8_t i2c_Master_Write_Byte(uInt8_t data, uInt8_t slave_add, uInt8_t data_add);

void i2c_Master_Read_Byte(uInt8_t *data, uInt8_t slave_add, uInt8_t data_add);

void i2c_Slave_Init(uInt8_t Address);

#endif 
