/*
 * timer0/src/timer0_init.c
 * timer0 configuration
 * author 
 */

#include <timer0/include/timer0.h>

void timer0_init(uInt16_t count)
{
    /* TODO */	
    T0CON = 0x02; // 16bits, prescale 1:2, Fosc/4
    uInt16_t val = 65535- count;
    TMR0H = (uInt8_t)(val>>8);
    TMR0L = (uInt8_t)val;
    
    OSCCONbits.IDLEN = 1;
    
    INTCONbits.TMR0IE = 1;
    INTCONbits.TMR0IF = 0;
    INTCON2bits.TMR0IP = 1;

}
