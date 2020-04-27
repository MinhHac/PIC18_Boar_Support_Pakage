/*
 * timer0/src/timer0_reload.c
 * timer0 reload value
 * author 
 */

#include <timer0/include/timer0.h>

void timer0_reload(uInt16_t count)
{
    /* TODO */	
    uInt16_t val = 65535- count;
    TMR0H = (uInt8_t)(val>>8);
    TMR0L = (uInt8_t)val;
}
