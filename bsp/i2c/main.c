
#include <bsplib.h>



void main(void) {
/*
    TRISB = 0x00;
    
    uInt8_t a[3],b;
    Soft_I2c_Init();
    lcd4_init();
    lcd4_sendString("Lien CHO");

    soft_i2c_Master_Write_Byte(0xA0,0x00,'D');
    Delay_10ms();
    Delay_5ms();
    soft_i2c_Master_Write_Byte(0xA0,0x01,'I');
    Delay_10ms();
    Delay_5ms();
    soft_i2c_Master_Write_Byte(0xA0,0x02,'E');
    Delay_20ms();
 //   Delay_20ms();

   // soft_i2c_Master_Read_Byte(0xA0,0x00,&a);

    soft_i2c_Master_Read_Multi_Bytes(0xA0,0x00,3,&a);
    lcd4_gotoXY(2,5);
    lcd4_sendChar(a[0]);
    lcd4_sendChar(a[1]);
    lcd4_sendChar(a[2]);
    lcd4_sendChar('N');
    */
    lcd_soft_i2c_init(SLAVE_ADD, SLAVE_DATA_ADD);
    //lcd_soft_i2c_sendChar('A',0x4E,0x27);
    while (1) {
    }
}