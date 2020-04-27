/*
 * test program for timer0 library - picsimlab McLab2/Board 3 project
 * author 
 */
#include <bsplib.h>

#define pTEST LATAbits.LATA4

void scheduler(void);
uInt8_t scheduler_ct = 0;
bit TICK = 0;

void main(void) {
    /* pin test for oscilloscope */
    TRISAbits.TRISA4 = 0;
    pTEST = 0;

    /* TODO */
    /*Init led 1*/
    TRISBbits.TRISB0 = 0;
    LATBbits.LATB0 = 0;

    timer0_init(TIMER0_PERIOD);
    sys_interrupt_enable();
    timer0_start();


    while (1) {
        if(TICK){
           TICK = 0;
           scheduler();
        }
        sleep();
    }
}

void __interrupt(high_priority) high_isr(void) {
    /* TODO */
    if (INTCONbits.TMR0IF) {
        //pTEST=~pTEST;
        INTCONbits.TMR0IF = 0;
        timer0_reload(TIMER0_PERIOD);
        //LATBbits.LATB0 = ~LATBbits.LATB0;
        TICK = 1;
    }
}

void scheduler(void) {

    switch (scheduler_ct) {
        case 0:
        {
            pTEST = ~pTEST;
            break;
        }

        case 1:
        {

            break;
        }
    }
    scheduler_ct++;
    if (scheduler_ct == 3) scheduler_ct = 0;
}