%:include <SPI.h>
%:include <Wire.h>
%:include <Adafruit_GFX.h>
%:include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, 4);

#define CLS display.clearDisplay()
#define DD display.display()
#define getBuffer display.getBuffer()
#define invertDisplay(bl) display.invertDisplay(bl)

#define startscrollright(start, _stop_) display.startscrollright(start, _stop_)
#define startscrollleft(start, _stop_) display.startscrollleft(start, _stop_)
#define startscrolldiagleft(start, _stop_) display.startscrolldiagleft(start, _stop_)
#define startscrolldiagright(start, _stop_) display.startscrolldiagright(start, _stop_)
#define stopscroll display.stopscroll()
#define setcursor(x, y) display.setCursor(x, y)
#define setTextSize(s) display.setTextSize(s)
#define setTextColor(color) display.setTextColor(color)

#define drawBitmap(x,y,bmp,width,height) display.drawBitmap(x,y,bmp,width,height,1)
#define getPixel(x, y) display.getPixel(x, y)
#define drawPixel(x, y) display.drawPixel(x, y, SSD1306_INVERSE)
#define drawLine(x1, y1, x2, y2) display.drawLine(x1, y1, x2, y2, SSD1306_INVERSE)
#define drawCircle(x, y, s) display.drawCircle(x, y, s, SSD1306_INVERSE)
#define fillCircle(x1, y1, x2, y2) display.fillCircle(x1, y1, x2, y2, SSD1306_INVERSE)
#define drawRect(x1, y1, x2, y2) display.drawRect(x1, y1, x2, y2, SSD1306_INVERSE)
#define fillRect(x1, y1, x2, y2) display.fillRect(x1, y1, x2, y2, SSD1306_INVERSE)
#define roundRect(x1, y1, x2, y2, s) display.drawRoundRect(x1, y1, x2, y2, s, SSD1306_INVERSE)
#define fillRoundRect(x1, y1, x2, y2, s) display.fillRoundRect(x1, y1, x2, y2, s, SSD1306_INVERSE)
#define drawTriangle(x1, y1, x2, y2, x3, y3) display.drawTriangle(x1, y1, x2, y2, x3, y3, SSD1306_INVERSE)
void setup() {
  { // display
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    CLS;
  }
}

void loop() {
  CLS;
  drawPixel(10, 10);
  DD;
}
