#include <chronoApp.h>

void task1(chronoHandle *chrono) {
    if (button_StartOrStop_read() == APPUIE) {
        chrono->btn_stat_stop_flag = APPUIE;
    } else if (button_StartOrStop_read() == LACHE && chrono->btn_stat_stop_flag == APPUIE) {

        chrono->compteur_flag = ~chrono->compteur_flag;

        chrono->btn_stat_stop_flag = LACHE;
    }
    if (chrono->compteur_flag != STOP) {
        chrono->compteur++;

        if ((chrono->compteur - 1) % 10 == 0) {
            if (chrono->compteur == 36000 + 1) {
                chrono->compteur = 0;
                lcd_sendString("00:00");
            } else {
                lcd_sendCommand(LCD_COMMAND_RETURN);
                uInt8_t a = (chrono->compteur - 1) / 6000;
                uInt8_t b = (chrono->compteur - 1) / 600 - 10 * a;
                uInt8_t c = (chrono->compteur - 1) / 100 - 60 * a - 6 * b;
                uInt8_t d = (chrono->compteur - 1) / 10 - 600 * a - 60 * b - 10 * c;

                lcd_sendChar(a + 48);
                lcd_sendChar(b + 48);
                lcd_sendChar(':');
                lcd_sendChar(c + 48);
                lcd_sendChar(d + 48);
            }
        }
    }
}

void task2(chronoHandle *chrono) {
    if (chrono->compteur_flag != STOP) {
        uInt8_t a = (chrono->compteur - 1) / 6000;
        uInt8_t b = (chrono->compteur - 1) / 600 - 10 * a;
        uInt8_t c = (chrono->compteur - 1) / 100 - 60 * a - 6 * b;
        uInt8_t d = (chrono->compteur - 1) / 10 - 600 * a - 60 * b - 10 * c;

        uart_putc('\r');
        uart_putc(a + 48);
        uart_putc(b + 48);
        uart_putc(':');
        uart_putc(c + 48);
        uart_putc(d + 48);
    }

}

void task3(chronoHandle *chrono) {
    if (button_Reset_read() == APPUIE) {
        chrono->btn_reset_flag = APPUIE;
    } else if (button_Reset_read() == LACHE && chrono->btn_reset_flag == APPUIE) {
        chrono->compteur_flag = STOP;
        chrono->compteur = 0;
        lcd_sendString("\r00:00");
        uart_puts("\r00:00");
        chrono->btn_reset_flag = LACHE;
    }
}