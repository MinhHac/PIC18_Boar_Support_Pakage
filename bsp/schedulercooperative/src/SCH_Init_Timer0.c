#include <schedulercooperative/include/scheduler_cp.h>

void SCH_Init_Timer0(uInt16_t count) {
    uInt8_t i;
    /*Delete all tasks*/
    for (i = 0; i < SCH_MAX_TASKS; i++) {
        SCH_Delete_Task(i);
    }

    /*enable idl mode ande initiale Error code general*/
    Error_code_G = 0;
    OSCCONbits.IDLEN = 1;

    /*configuration timer 0*/
    T0CON = 0x02; // 16bits, prescale 1:2, Fosc/4
    uInt16_t val = 65535 - count;
    TMR0H = (uInt8_t) (val >> 8);
    TMR0L = (uInt8_t) val;

    /*interrupt*/
    INTCONbits.TMR0IE = 1;
    INTCONbits.TMR0IF = 0;
    INTCON2bits.TMR0IP = 1;

}

