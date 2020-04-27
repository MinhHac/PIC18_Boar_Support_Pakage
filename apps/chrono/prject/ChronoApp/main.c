#include <chronoApp.h>


/*initialisation scheduler*/

uInt8_t scheduler_ct = 0;
bit TICK = 0;

void main(void) {

    TRISAbits.TRISA4 = 0;
    pTEST = 0;

    static chronoHandle *chrono;
    system_init();
    app_init(chrono);
    
    while (1) {
        if (TICK) {
            TICK = 0;
            switch (scheduler_ct) {
                case 0:{
                    pTEST = ~pTEST;
                    task1(chrono);
                    break;
                }
                case 1:
                {
                    task2(chrono);
                    break;
                }

                case 2:
                {
                    task3(chrono);
                    break;
                }

            }
            scheduler_ct++;
            if (scheduler_ct == 5) scheduler_ct = 0;
        }
    }
    sleep();
}

void __interrupt(high_priority) high_isr(void) {
    /* TODO */
    timer0_isr_process();
}

void __interrupt(low_priority) isr_low(void) {
    /* TODO */
    uart_isr_process();
}
