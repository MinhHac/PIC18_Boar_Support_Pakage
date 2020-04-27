#include <tft_lcd_28/include/tft_lcd.h>

void tft_graph_draw_pixel(uInt16_t x, uInt16_t y, uInt16_t color) {
  if((x < LCD_WIDTH) && (y < LCD_HEIGHT)) {
    tft_set_addr_window(x, y, 1, 1);
    spi_start_write();
    spi_write(color >> 8);
    spi_write(color & 0xFF);
    spi_stop_write();
  }
}

void tft_graph_fill_rect(uInt16_t x, uInt16_t y, uInt16_t w, uInt16_t h, uInt16_t color) {
  if(w && h) {                            // Nonzero width and height?  
    if((x >= LCD_WIDTH) || (y >= LCD_HEIGHT))  // >=???
        return;
    if((x + w - 1) >= 240)  w = 240 - x;
    if((y + h - 1) >= 320)  h = 320 - y;
    
    tft_set_addr_window(x, y, w, h);
    uInt32_t px = (uInt32_t)w * h;
    spi_start_write();
    while (px--) {
      spi_write(color >> 8);
      spi_write(color &0xFF);
    }
    spi_stop_write();
  }
}

void tft_graph_fill_screen(uInt16_t color) {
    tft_graph_fill_rect(0, 0, LCD_WIDTH-1, LCD_HEIGHT-1, color);
}

void tft_graph_invert_color(bool i) {
    tft_lcd_send(TFT_C,i ? ILI9341_INVON : ILI9341_INVOFF);
}

