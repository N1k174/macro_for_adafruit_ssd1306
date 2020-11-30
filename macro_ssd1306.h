#ifndef MACRO_SSD1306
#define MACRO_SSD1306

#define CLS display.clearDisplay()
#define DD display.display()
#define GET_BUFFER display.getBuffer()
#define GET_PIXEL(__x, __y) display.getPixel(__x, __y)
#define INVERT_DISPLAY(BL) display.invertDisplay(BL)

#define START_SCROLL_RIGHT(__start, __stop) display.startscrollright(__start, __stop)
#define START_SCROLL_LEFT(__start, __stop) display.startscrollleft(__start, __stop)
#define START_SCROLL_DIAG_LEFT(__start, __stop) display.startscrolldiagleft(__start, __stop)
#define START_SCROLL_DIAG_RIGHT(__start, __stop) display.startscrolldiagright(__start, __stop)
#define STOP_SCROLL display.stopscroll()

#define SET_CURSOR(__x, __y) display.setCursor(__x, __y)
#define SET_TEXT_SIZE(__size__) display.setTextSize(__size__)
#define SET_TEXT_COLOR(__color__) display.setTextColor(__color__)

#define WHITE_PIXEL(__x, __y) display.drawPixel(__x, __y, SSD1306_WHITE)
#define BLACK_PIXEL(__x, __y) display.drawPixel(__x, __y, SSD1306_BLACK)
#define REVERSE_PIXEL(__x, __y) display.drawPixel(__x, __y, SSD1306_REVERSE)

#define WHITE_LINE(__x, __y, __x2, __y2) display.drawLine(__x, __y, __x2, __y2, SSD1306_WHITE)
#define BLACK_LINE(__x, __y, __x2, __y2) display.drawLine(__x, __y, __x2, __y2, SSD1306_BLACK)
#define REVERSE_LINE(__x, __y, __x2, __y2) display.drawLine(__x, __y, __x2, __y2, SSD1306_REVERSE)

#define WHITE_FAST_V_LINE(__x, __y, __l) display.drawFastVLine(__x, __y, __l, SSD1306_WHITE)
#define BLACK_FAST_V_LINE(__x, __y, __l) display.drawFastVLine(__x, __y, __l, SSD1306_BLACK)
#define REVERSE_FAST_V_LINE(__x, __y, __l) display.drawFastVLine(__x, __y, __l, SSD1306_REVERSE)

#define WHITE_FAST_H_LINE(__x, __y, __l) display.drawFastHLine(__x, __y, __l, SSD1306_WHITE)
#define BLACK_FAST_H_LINE(__x, __y, __l) display.drawFastHLine(__x, __y, __l, SSD1306_BLACK)
#define REVERSE_FAST_H_LINE(__x, __y, __l) display.drawFastHLine(__x, __y, __l, SSD1306_REVERSE)

#define WHITE_CIRCLE(__x, __y, __r) display.drawCircle(__x, __y, __r, SSD1306_WHITE)
#define BLACK_CIRCLE(__x, __y, __r) display.drawCircle(__x, __y, __r, SSD1306_BLACK)
#define REVERSE_CIRCLE(__x, __y, __r) display.drawCircle(__x, __y, __r, SSD1306_REVERSE)

#define FILL_WHITE_CIRCLE(__x, __y, __r) display.fillCircle(__x, __y, __r, SSD1306_WHITE)
#define FILL_BLACK_CIRCLE(__x, __y, __r) display.fillCircle(__x, __y, __r, SSD1306_BLACK)
#define FILL_REVERSE_CIRCLE(__x, __y, __r) display.fillCircle(__x, __y, __r, SSD1306_REVERSE)

#define WHITE_RECT(__x, __y, __x2, __y2) display.drawRect(__x, __y, __x2, __y2, SSD1306_WHITE)
#define BLACK_RECT(__x, __y, __x2, __y2) display.drawRect(__x, __y, __x2, __y2, SSD1306_BLACK)
#define REVERSE_RECT(__x, __y, __x2, __y2) display.drawRect(__x, __y, __x2, __y2, SSD1306_REVERSE)

#define FILL_WHITE_RECT(__x, __y, __x2, __y2) display.fillRect(__x,__ y, __x2, __y2, SSD1306_WHITE)
#define FILL_BLACK_RECT(__x, __y, __x2, __y2) display.fillRect(__x,__ y, __x2, __y2, SSD1306_BLACK)
#define FILL_REVERSE_RECT(__x, __y, __x2, __y2) display.fillRect(__x,__ y, __x2, __y2, SSD1306_REVERSE)

#define ROUND_WHITE_RECT(__x, __y, __x2, __y2, __r) display.drawRoundRect(__x, __y, __x2, __y2, __r, SSD1306_WHITE) 
#define ROUND_BLACK_RECT(__x, __y, __x2, __y2, __r) display.drawRoundRect(__x, __y, __x2, __y2, __r, SSD1306_BLACK)
#define ROUND_REVERSE_RECT(__x, __y, __x2, __y2, __r) display.drawRoundRect(__x, __y, __x2, __y2, __r, SSD1306_REVERSE) 

#define FILL_ROUND_WHITE_RECT(__x, __y, __x2, __y2, __r) display.fillRoundRect(__x, __y, __x2, __y2, __r, SSD1306_WHITE)
#define FILL_ROUND_BLACK_RECT(__x, __y, __x2, __y2, __r) display.fillRoundRect(__x, __y, __x2, __y2, __r, SSD1306_BLACK)
#define FILL_ROUND_REVERSE_RECT(__x, __y, __x2, __y2, __r) display.fillRoundRect(__x, __y, __x2, __y2, __r, SSD1306_REVERSE)

#define WHITE_TRIANGLE(__x, __y, __x2, __y2, __x3, __y3) display.drawTriangle(__x, __y, __x2, __y2, __x3, __y3, SSD1306_WHITE)
#define BLACK_TRIANGLE(__x, __y, __x2, __y2, __x3, __y3) display.drawTriangle(__x, __y, __x2, __y2, __x3, __y3, SSD1306_BLACK)
#define REVERSE_TRIANGLE(__x, __y, __x2, __y2, __x3, __y3) display.drawTriangle(__x, __y, __x2, __y2, __x3, __y3, SSD1306_REVERSE)
#endif
