/*if use scheduler, there are using timer 0 inside, so don't use timer 0 for or 
 * the others objectives
 */
#ifndef _SCHEDULER_CP_H
#define _SCHEDULER_CP_H

#include <common/include/common.h>

typedef struct {
    void (*pTask)(void);
    uInt16_t Delay;
    uInt16_t Period;
    uInt8_t RunMe;
} sTask;


//#define pTEST LATAbits.LATA4

/* ------ Public function prototypes -------------------------------*/

void SCH_Init_Timer0(uInt16_t count);
void SCH_timer0_reload(uInt16_t count);
void SCH_Timer0_isr_Process(void);
#define SCH_Start() T0CONbits.TMR0ON = 1;\
                    sys_interrupt_enable();

#define SCH_Stop() T0CONbits.TMR0ON = 0;\
                    sys_interrupt_disable();


/* Core scheduler functions*/
void SCH_Dispatch_Tasks(void);
uInt8_t SCH_Add_Task(void(*)(void), const uInt16_t, const uInt16_t);
bit SCH_Delete_Task(const uInt8_t);
void SCH_Report_Status(void);

/* ------ Public constants -----------------------------------------*/

#define TIMER0_BASE_PERIOD   20000     /* 20ms period example */

#define SCH_MAX_TASKS 5  

#define RETURN_NORMAL (bit) 0
#define RETURN_ERROR (bit) 1


/* code error*/
#define ERROR_SCH_TOO_MANY_TASKS (1)
#define ERROR_SCH_CANNOT_DELETE_TASK (2)

#define ERROR_SCH_WAITING_FOR_SLAVE_TO_ACK (3)
#define ERROR_SCH_WAITING_FOR_START_COMMAND_FROM_MASTER (3)

#define ERROR_SCH_ONE_OR_MORE_SLAVES_DID_NOT_START (4)
#define ERROR_SCH_LOST_SLAVE (5)

#define ERROR_SCH_CAN_BUS_ERROR (6)

#define ERROR_I2C_WRITE_BYTE (10)
#define ERROR_I2C_READ_BYTE (11)
#define ERROR_I2C_WRITE_BYTE_AT24C64 (12)
#define ERROR_I2C_READ_BYTE_AT24C64 (13)
#define ERROR_I2C_DS1621 (14)

#define ERROR_USART_TI (21)
#define ERROR_USART_WRITE_CHAR (22)

#define ERROR_SPI_EXCHANGE_BYTES_TIMEOUT (31)
#define ERROR_SPI_X25_TIMEOUT (32)
#define ERROR_SPI_MAX1110_TIMEOUT (33)

#define ERROR_ADC_MAX150_TIMEOUT (44)



/*variable global*/

sTask SCH_tasks_G[SCH_MAX_TASKS];

uInt8_t Error_code_G;

#endif