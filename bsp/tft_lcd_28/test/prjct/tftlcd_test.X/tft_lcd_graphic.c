#include <tft_lcd_28/include/tft_lcd.h>

int abso(int a){
	if(a < 0)
		return -a;
	return a;
}

void writeLine(uInt16_t x0, uInt16_t y0, uInt16_t x1, uInt16_t y1, uInt16_t color) {
    bool steep = abso((int)(y1 - y0)) > abso((int)(x1 - x0));
    if (steep) {
        _swap_int16_t(x0, y0);
        _swap_int16_t(x1, y1);
    }

    if (x0 > x1) {
        _swap_int16_t(x0, x1);
        _swap_int16_t(y0, y1);
    }

    int16_t dx, dy;
    dx = x1 - x0;
    dy = abso((int)(y1 - y0));

    int16_t err = dx / 2;
    int16_t ystep;

    if (y0 < y1) {
        ystep = 1;
    } else {
        ystep = -1;
    }

    for (; x0<=x1; x0++) {
        if (steep) {
            tft_graph_draw_pixel(y0, x0, color);
        } else {
            tft_graph_draw_pixel(x0, y0, color);
        }
        err -= dy;
        if (err < 0) {
            y0 += ystep;
            err += dx;
        }
    }
}

void tft_graph_drawHLine(uInt16_t x, uInt16_t y, uInt16_t w, uInt16_t color) {
  if( (x < LCD_WIDTH) && (y < LCD_HEIGHT) && w) {   
    if((x + w - 1) >= LCD_HEIGHT)  
      w = LCD_WIDTH  - x;
    
    tft_set_addr_window(x, y, w, 1);
    spi_start_write();
    while (w--) {
      spi_write(color >> 8);
      spi_write(color&0xFF);
    }
    spi_stop_write();
  }
}

void tft_graph_drawVLine(uInt16_t x, uInt16_t y, uInt16_t h, uInt16_t color) {
  if( (x < LCD_WIDTH) && (y < LCD_HEIGHT) && h) {  
    if((y + h - 1) >= LCD_HEIGHT) 
      h = LCD_HEIGHT - y;
    
    tft_set_addr_window(x, y, 1, h);
    spi_start_write();
    while (h--) {
      spi_write(color >> 8);
      spi_write(color&0xFF);
    }
    spi_stop_write();
  }
}

void tft_graph_draw_line(uInt16_t x0, uInt16_t y0, uInt16_t x1, uInt16_t y1, uInt16_t color) {
    // contraintes x
    if (x0 >= LCD_WIDTH) x0 = LCD_WIDTH-1;
    if (x1 >= LCD_WIDTH) x1 = LCD_WIDTH-1;
    // contraintes y
    if (y0 >= LCD_HEIGHT) y0 = LCD_HEIGHT-1;
    if (y1 >= LCD_HEIGHT) y1 = LCD_HEIGHT-1;

    // direction

    bool xdir = x1 > x0 ? 1 : 0;
    bool ydir = y1 > y0 ? 1 : 0;

    uInt8_t over = 0;
    uInt8_t i;
    uInt16_t dx = abso((int)x1 - (int)x0);
    uInt16_t dy = abso((int)y1 - (int)y0);


    if ((x0 == x1)&&(y0 != y1)) {
        tft_graph_fill_rect(x0, y0, 1, y1 - y0, color);
    } else if ((x0 != x1)&&(y0 == y1)) {
        tft_graph_fill_rect(x0, y0, x1 - x0, 1, color);
    } else {
       /* if (dx > dy) {
            for (i = 0; i < dx; i++) {
                tft_graph_draw_pixel(x0,y0,color);
                x0++;
                over += dy;
                if (over >= dx) {
                    over -= dx;
                    tft_graph_draw_pixel(x0,y0,color);
                    y0++;
                }
            }
        } else {
            for (i = 0; i < dy; i++) {
                tft_graph_draw_pixel(x0,y0,color);
                y0++;
                over += dx;
                if (over >= dy) {
                    over -= dy;
                    tft_graph_draw_pixel(x0,y0,color);
                    x0++;
                }

            }
        }*/
        writeLine(x0,y0,x1,y1,color);
    }
    currantPoint.X = x1;
    currantPoint.Y = y1;
}

void tft_graph_draw_circle(uInt16_t x0, uInt16_t y0, uInt16_t r, uInt16_t color) {
    int16_t f = 1 - r;
    int16_t ddF_x = 1;
    int16_t ddF_y = -2 * r;
    int16_t x = 0;
    int16_t y = r;

    tft_graph_draw_pixel(x0  , y0+r, color);
    tft_graph_draw_pixel(x0  , y0-r, color);
    tft_graph_draw_pixel(x0+r, y0  , color);
    tft_graph_draw_pixel(x0-r, y0  , color);

    while (x<y) {
        if (f >= 0) {
            y--;
            ddF_y += 2;
            f += ddF_y;
        }
        x++;
        ddF_x += 2;
        f += ddF_x;

        tft_graph_draw_pixel(x0 + x, y0 + y, color);
        tft_graph_draw_pixel(x0 - x, y0 + y, color);
        tft_graph_draw_pixel(x0 + x, y0 - y, color);
        tft_graph_draw_pixel(x0 - x, y0 - y, color);
        tft_graph_draw_pixel(x0 + y, y0 + x, color);
        tft_graph_draw_pixel(x0 - y, y0 + x, color);
        tft_graph_draw_pixel(x0 + y, y0 - x, color);
        tft_graph_draw_pixel(x0 - y, y0 - x, color);
    }
}

void tft_graph_draw_circle_helper(uInt16_t x0, uInt16_t y0, uInt16_t r, uInt8_t cornername, uInt16_t color) {
    int16_t f     = 1 - r;
    int16_t ddF_x = 1;
    int16_t ddF_y = -2 * r;
    int16_t x     = 0;
    int16_t y     = r;

    while (x<y) {
        if (f >= 0) {
            y--;
            ddF_y += 2;
            f     += ddF_y;
        }
        x++;
        ddF_x += 2;
        f     += ddF_x;
        if (cornername & 0x4) {
            tft_graph_draw_pixel(x0 + x, y0 + y, color);
            tft_graph_draw_pixel(x0 + y, y0 + x, color);
        }
        if (cornername & 0x2) {
            tft_graph_draw_pixel(x0 + x, y0 - y, color);
            tft_graph_draw_pixel(x0 + y, y0 - x, color);
        }
        if (cornername & 0x8) {
            tft_graph_draw_pixel(x0 - y, y0 + x, color);
            tft_graph_draw_pixel(x0 - x, y0 + y, color);
        }
        if (cornername & 0x1) {
            tft_graph_draw_pixel(x0 - y, y0 - x, color);
            tft_graph_draw_pixel(x0 - x, y0 - y, color);
        }
    }
}

void tft_graph_fill_circle(uInt16_t x0, uInt16_t y0, uInt16_t r, uInt16_t color) {
    tft_graph_drawVLine(x0, y0-r, 2*r+1, color);
    tft_graph_draw_circle_helper(x0, y0, r, 3, color);
}