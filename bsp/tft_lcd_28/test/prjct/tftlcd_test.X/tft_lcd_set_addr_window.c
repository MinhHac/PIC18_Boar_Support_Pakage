#include <tft_lcd_28/include/tft_lcd.h>

void tft_set_addr_window(uInt16_t x1, uInt16_t y1, uInt16_t w, uInt16_t h) {
    uInt16_t x2 = (x1 + w - 1),
             y2 = (y1 + h - 1);
    tft_lcd_send(TFT_C,ILI9341_CASET); // Column address set
    spi_start_write();
    spi_write(x1 >> 8);
    spi_write(x1& 0xFF);
    spi_write(x2 >> 8);
    spi_write(x2& 0xFF);
    spi_stop_write();
    tft_lcd_send(TFT_C,ILI9341_PASET); // Row address set
    spi_start_write();
    spi_write(y1 >> 8);
    spi_write(y1& 0xFF);
    spi_write(y2 >> 8);
    spi_write(y2& 0xFF);
    spi_stop_write();
    tft_lcd_send(TFT_C,ILI9341_RAMWR); // Write to RAM
}


void tft_scroll_to(uInt16_t y) {
    
    tft_lcd_send(TFT_C,ILI9341_VSCRSADD);
    spi_start_write();
    spi_write(y >> 8);
    spi_write(y&0xFF);
    spi_stop_write();
}