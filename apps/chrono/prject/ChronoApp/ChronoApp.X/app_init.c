#include <chronoApp.h>

void system_init(void){
    buttons_init();
    lcd_init();
    timer0_init(TIMER0_PERIOD);
    uart_init(UART_BAUD_RATE);
    sys_interrupt_enable();
    timer0_start();
}

void app_init(chronoHandle *chrono){
    /*button*/
    chrono->btn_reset_flag = LACHE;
    chrono->btn_stat_stop_flag = LACHE;
    /*Compteur*/
    chrono->compteur = 0;
    chrono->compteur_flag = STOP;
    /*Afficheur*/
    lcd_sendString("00:00");
    uart_putc('\r');
    uart_puts("00:00");
}