#include <bsplib.h>

void testGraph(void){
    tft_graph_draw_pixel(5,5,ILI9341_BLUE);
    tft_graph_draw_pixel(8,5,ILI9341_BLUE);
    //tft_graph_fill_rect(10,10,1,10,ILI9341_GREEN);
}
void testText(void){
    tft_text_gotoXY(10,10);
    tft_text_print('L');
    tft_text_set_size(5);
    tft_text_set_color(ILI9341_DARKGREEN);
    tft_text_print('H');
    tft_text_print('\n');
    tft_text_printf("HO MINH \n\rHAC");  
    
}


void main(void) {
    
    tft_lcd_init();
    Delay_10ms();

    
    //testGraph();
    testText();

    while (1) {

    }
}
