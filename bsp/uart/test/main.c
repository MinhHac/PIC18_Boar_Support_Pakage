/*
 * test program for uart library - picsimlab McLab2/Board 3 project
 * author 
 */

#include <bsplib.h>

/*Test pin*/
#define pTEST LATAbits.LATA4
/* TODO */
void scheduler(void);
uInt8_t scheduler_ct = 0;
extern bit TICK = 0;

void main(void) {
    /*Test pin*/
    TRISAbits.TRISA4 = 0;
    pTEST = 0;
    uInt8_t tmp1[10];

    buttons_init();
    lcd_init();
    timer0_init(TIMER0_PERIOD);
    uart_init(UART_BAUD_RATE);
    sys_interrupt_enable();

    lcd_sendString("HO HAC");

    timer0_start();
    static bit a = 0, b = 0;

    while (1) {
        /* uInt8_t get = uart_gets(tmp1,10,0);
         if (get==1) {
            uart_puts(tmp1);
            uart_puts("\r\n");
         }else if(get == 2){
             uart_puts(tmp1);
         }*/

        /*
                if (button_StartOrStop_read() == 1 && a == 1) {

                    lcd_sendChar('A');
                    a = 0;

                } else if (button_StartOrStop_read() == 0) {
                    a = 1;
                }

                if (button_Reset_read() == 1 & b == 1) {
                    lcd_sendCommand(LCD_COMMAND_CLEAR);
                    b = 0;
                } else if (button_Reset_read() == 0) {
                    b = 1;
                }*/


        /*
                if (TICK) {
                    TICK = 0;
                    scheduler();
                }
                //sleep();
         */
    }
}

/*Interrupt*/
void __interrupt(high_priority) high_isr(void) {
    /* TODO */
    timer0_isr_process();
}

void __interrupt(low_priority) isr_low(void) {
    /* TODO */

    uart_isr_process();
}

void scheduler(void) {
    static uInt8_t tmp, tmp1[UART_CIRC_BUFF_SIZE];
    static bit a = 0, b = 0;
    switch (scheduler_ct) {
        case 0:
        {
            pTEST = ~pTEST;

            break;
        }
        case 1:
        {
            /* uInt8_t get = uart_gets(tmp1,UART_CIRC_BUFF_SIZE, 0);
             if (get == 1) {
                 uart_puts(tmp1);
                 uart_puts("\n\r");
             } else if (get == 2) {
                 uart_puts(tmp1);
             }
             */
            if (button_StartOrStop_read() == 1 && a == 1) {

                lcd_sendChar('A');
                uart_putc('A');
                a = 0;

            } else if (button_StartOrStop_read() == 0) {
                a = 1;
            }


            if (button_Reset_read() == 1 & b == 1) {
                lcd_sendCommand(LCD_COMMAND_CLEAR);
                b = 0;
            } else if (button_Reset_read() == 0) {
                b = 1;
            }
            break;
        }
        case 2:
        {
            break;
        }
    }
    scheduler_ct++;
    if (scheduler_ct == 3) scheduler_ct = 0;
}