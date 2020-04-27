#ifndef _CHORONO_APP_H_
#define _CHORONO_APP_H_

#include <bsplib.h>
#include <stdio.h>

#define pTEST LATAbits.LATA4
#define START 0
#define STOP  1
#define APPUIE 0
#define LACHE  1

typedef struct{
    enum{
        TASK1,
        TASK2,
        TASK3,
    }state;
    uInt8_t btn_stat_stop_flag;
    uInt8_t btn_reset_flag;
    //uInt8_t buffer[UART_CIRC_BUFF_SIZE];
    uInt8_t compteur_flag;
    uInt16_t compteur;
} chronoHandle;

void system_init(void);

void app_init(chronoHandle *chrono);

void task1(chronoHandle *chrono);

void task2(chronoHandle *chrono);

void task3(chronoHandle *chrono);
#endif