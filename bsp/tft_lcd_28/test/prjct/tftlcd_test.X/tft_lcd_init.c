#include <tft_lcd_28/include/tft_lcd.h>

void tft_lcd_send(bool dc, uInt8_t value) {
    /* register or data */
    /* 1: Data; 0 command */
    TFT_DC = dc;
    /* transmit via SPI */
    spi_start_write();
    spi_write(value);
    spi_stop_write();
   
    TFT_DC = 1;
}

void tft_lcd_init(void) {
    /*Pin direction DC, RES output*/
    TFT_DC_DIR = 0;
    TFT_RES_DIR = 0;
    /*SPI init*/
    spi_init(SPI_MASTER,SPI_MODE_0);
    Delay_1ms();
    /*Select*/
    SPI_CS = 0;
    /*reset*/
    TFT_RES = 0;
    Delay_10ms();
    TFT_RES = 1;
    tft_lcd_send(TFT_C,ILI9341_SWRESET);
    Delay_40ms();
    Delay_60ms();
    
    /*Process init LCD TFT*/
    uInt8_t     cmd, x, numArgs;
    uInt8_t *addr = initcmd;
    cmd = *addr++;
    while( cmd > 0 ) {
        tft_lcd_send(TFT_C,cmd);
        spi_start_write();
        x       = *addr++;
        numArgs = x & 0x7F;
        while(numArgs--) spi_write(*addr++);
        spi_stop_write();
        if(x & 0x80) Delay_200ms();
        cmd = *addr++;
    }
    /*Deselect*/
    SPI_CS = 1;
    
    /*init variable global*/
    currantPoint.X = 0;
    currantPoint.Y = 0;
    
    MText.cursor_x    = 0;
    MText.cursor_y    = 0;
    MText.textcolor   = ILI9341_GREEN;
    MText.textbgcolor = 0xFFFF;
    MText.textsize    = 1;
    MText.wrap        = TRUE;
}

