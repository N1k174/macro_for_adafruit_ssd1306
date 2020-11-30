#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "macro_ssd1306.h"

#define WIDTH  static_cast<uint8_t> (128)
#define HEIGHT static_cast<uint8_t> (64)

Adafruit_SSD1306 display(WIDTH, HEIGHT, &Wire, 4);

void setup() {
  { // display
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    CLS;
  }
}

void loop() {
  CLS;
  display.drawFastVLine(WIDTH / 2, 0, HEIGHT, SSD1306_WHITE);
  display.drawFastHLine(0, HEIGHT / 2, WIDTH, SSD1306_WHITE);
  for (int8_t i(-(WIDTH / 2)); i < (WIDTH / 2); ++i) {
    //WHITE_LINE((WIDTH / 2) + i, (HEIGHT / 2) - pow(i, 2), (WIDTH / 2) + (i + 1), (HEIGHT / 2) - pow ((i + 1), 2));    
    WHITE_LINE((WIDTH / 2) + i, (HEIGHT / 2) + sin(radians(i * 3)) * 30, (WIDTH / 2) + (i + 1), sin(radians((i + 1) * 3)) * 30 + (HEIGHT / 2));
  }
  
  DD;
}
