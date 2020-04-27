#include <timer0/include/timer0.h>

void timer0_isr_process(void){
    if (INTCONbits.TMR0IF) {
        INTCONbits.TMR0IF = 0;
        timer0_reload(TIMER0_PERIOD);
        TICK = 1;
    }
}