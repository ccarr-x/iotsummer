// ILI9341 example with embedded color bitmaps in sketch.
// WILL NOT FIT ON ARDUINO UNO OR OTHER AVR BOARDS;
// uses large bitmap image stored in array!

// Options for converting images to the format used here include:
//   http://www.rinkydinkelectronics.com/t_imageconverter565.php
// or
//  GIMP (https://www.gimp.org/) as follows:
//    1. File -> Export As
//    2. In Export Image dialog, use 'C source code (*.c)' as filetype.
//    3. Press export to get the export options dialog.
//    4. Type the desired variable name into the 'prefixed name' box.
//    5. Uncheck 'GLIB types (guint8*)'
//    6. Check 'Save as RGB565 (16-bit)'
//    7. Press export to save your image.
//  Assuming 'image_name' was typed in the 'prefixed name' box of step 4,
//  you can have to include the c file, then using the image can be done with:
//    tft.drawRGBBitmap(0, 0, image_name.pixel_data, image_name.width, image_name.height);
//  See also https://forum.pjrc.com/threads/35575-Export-for-ILI9341_t3-with-GIMP

#include "SPI.h"
#include <Wire.h>
#include <Adafruit_ILI9341.h>
#include <Adafruit_GFX.h>
#include <Adafruit_STMPE610.h>
#include "image.h"
#include "imagetwo.h"
#include "barcode.h"
#include "bigimage.h"

// For the Adafruit shield, these are the default.
//#define TFT_DC 9
//#define TFT_CS 10

// Feather 32u4 or M0 with TFT FeatherWing:
//#define TFT_DC 10
//#define TFT_CS  9
// ESP8266:
#define TFT_DC 15
#define TFT_CS 0
#define STMPE_CS 16  //chip select
#define SD_CS    2   //chip select
// Other boards (including Feather boards) may have other pinouts;
// see learn.adafruit.com/adafruit-2-4-tft-touch-screen-featherwing/pinouts

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
Adafruit_STMPE610 ts = Adafruit_STMPE610(STMPE_CS);
#define TS_MAXX 100
#define TS_MINX 3800
#define TS_MINY 100
#define TS_MAXY 3750
TS_Point p;
// If using the breakout, change pins as desired
//Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);
void drawId() {
   tft.fillScreen(ILI9341_OLIVE); 
  tft.setRotation(1);
  tft.drawRGBBitmap(15,5,caraBitmap,CARA_WIDTH,CARA_HEIGHT); 
  tft.drawRGBBitmap(175,30,stuBitmap,STU_WIDTH,STU_HEIGHT);
  tft.fillRect(0, 160, 320, 160, ILI9341_WHITE); 
  tft.drawRGBBitmap(175,185,barBitmap,BAR_WIDTH,BAR_HEIGHT);  
  tft.setTextColor(ILI9341_BLACK);  tft.setTextSize(3);
  tft.setCursor(0,170);
  tft.println("Cara Carr");
  tft.setTextColor(ILI9341_BLACK);  tft.setTextSize(2);
  tft.setCursor(0,215);
  tft.println("Grade 11");
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2.5);
  tft.setCursor(160,135);
  tft.println("2019 - 2020");
}
bool detectTouch() {
  p = ts.getPoint();
  if (p.x < TS_MINX && p.x > TS_MAXX && p.y < TS_MAXY && p.y > TS_MINY) {
    p.x = map(p.x, TS_MINX, TS_MAXX, 0, tft.width());
    p.y = map(p.y, TS_MINY, TS_MAXY, 0, tft.height());
    Serial.print("X = "); Serial.print(p.x);
    Serial.print("\tY = "); Serial.print(p.y);
    Serial.print("\tPressure = "); Serial.println(p.z);
    //if detect touch in box, then do something
    if (p.x > 130 * 1 && p.x < 250 && p.y > 60 && p.y < 120) {
      return true;
    }
  }
  return false;
}

void setup() {
  tft.begin();
  Serial.begin(115200);
  drawId();
  delay(10);
  Serial.println("FeatherWing TFT");
  if (!ts.begin()) {
    Serial.println("Couldn't start touchscreen controller");
    while (1);
  }
  Serial.println("Touchscreen started");
  tft.begin();
}

void loop() {
  if (detectTouch()) {
    tft.fillScreen(ILI9341_BLACK);
    tft.setRotation(2);
    tft.drawRGBBitmap(0,0,bigcaraBitmap,BIGCARA_WIDTH,BIGCARA_HEIGHT);
    delay(5000);
    drawId();
    yield();
    }
  }
