#ifndef _BUTTON_H_
#define _BUTTON_H_

#define buttons_init() TRISBbits.TRISB0 = 1;\
                       TRISBbits.TRISB1 = 1; ADCON1=0x0E;
                                  

#define button_StartOrStop_read() PORTBbits.RB0

#define button_Reset_read()       PORTBbits.RB1

#endif