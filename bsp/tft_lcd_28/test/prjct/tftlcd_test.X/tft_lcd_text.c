#include <tft_lcd_28/include/tft_lcd.h>

#define display_width   LCD_WIDTH
#define display_height  LCD_HEIGHT


//tft_text MText ={0,0,ILI9341_GREEN,0xFFFF,1,TRUE}; 
        
void tft_text_print(uInt8_t c) {

  if (c == ' ' && MText.cursor_x == 0 && MText.wrap)
    return;
  if(c == '\r') {
    MText.cursor_x = 0;
    return;
  }
  if(c == '\n') {
    MText.cursor_y += MText.textsize * 8;
    return;
  }

  for(uInt8_t i = 0; i < 5; i++ ) {
    uInt8_t line = mfont[c][i];
    for(uInt8_t j = 0; j < 8; j++, line >>= 1) {
      if(line & 1) {
        if(MText.textsize == 1)
          tft_graph_draw_pixel(MText.cursor_x + i, MText.cursor_y + j, MText.textcolor);
        else
          tft_graph_fill_rect(MText.cursor_x + i * MText.textsize, MText.cursor_y + j * MText.textsize, MText.textsize, MText.textsize, MText.textcolor);
      } 
      else 
        if(MText.textbgcolor != MText.textcolor) {
          if(MText.textsize == 1)
            tft_graph_draw_pixel(MText.cursor_x + i, MText.cursor_y + j, MText.textbgcolor);
          else
            tft_graph_fill_rect(MText.cursor_x + i * MText.textsize, MText.cursor_y + j * MText.textsize, MText.textsize, MText.textsize, MText.textbgcolor);
        }
    }
  }

  if(MText.textbgcolor != MText.textcolor) {  // If opaque, draw vertical line for last column
    if(MText.textsize == 1)  tft_graph_drawHLine(MText.cursor_x + 5, MText.cursor_y, 8, MText.textbgcolor);
    else               tft_graph_fill_rect(MText.cursor_x + 5 * MText.textsize, MText.cursor_y, MText.textsize, 8 * MText.textsize, MText.textbgcolor);
  }

  MText.cursor_x += MText.textsize * 6;

  if( MText.cursor_x > ((uInt16_t)display_width + MText.textsize * 6) )
    MText.cursor_x = display_width;

  if (MText.wrap && (MText.cursor_x + (MText.textsize * 5)) > display_width)
  {
    MText.cursor_x = 0;
    MText.cursor_y += MText.textsize * 8;
    if( MText.cursor_y > ((uInt16_t)display_height + MText.textsize * 8) )
      MText.cursor_y = display_height;
  }
}

void tft_text_printf(uInt8_t *str){
    while(*str){
      tft_text_print(*str);
      str++;
    }
}

void tft_text_gotoXY(uInt16_t x, uInt16_t y){
   MText.cursor_x = x;
   MText.cursor_y = y;
}

void tft_text_set_size(uInt8_t textsize){
    MText.textsize = textsize;
}

void tft_text_set_color(uInt16_t textcolor){
    MText.textcolor = textcolor;
}

void tft_text_set_bg_color(uInt16_t textbgcolor){
    MText.textbgcolor = textbgcolor;
}