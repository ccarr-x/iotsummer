#include <Wire.h>

#include <DHT.h>
#include <Adafruit_ILI9341.h> // Hardware-specific library
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_STMPE610.h>


#define STMPE_CS 16  //chip select
#define TFT_CS   0   //tft
#define TFT_DC   15  //Data/Clock - Multiplexing
#define SD_CS    2   //chip select

#define LED_PIN 14

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
Adafruit_STMPE610 ts = Adafruit_STMPE610(STMPE_CS);
#define BoxSize 40
// This is calibration data for the raw touch data to the screen coordinates
#define TS_MAXX 100
#define TS_MINX 3800
#define TS_MINY 100
#define TS_MAXY 3750

TS_Point p;

#define box 40

void drawButton(char *string, int xpos, int ypos);
void drawLED();
void drawWelcome();

void drawButton(char *string, int xpos, int ypos) {
  tft.drawRect(xpos, ypos, box * 4, box * 1.5, ILI9341_BLACK);
  tft.setTextColor(ILI9341_DARKGREEN);
  tft.setTextSize(3);
  tft.setCursor(xpos + box * 1, ypos + box * 0.5);
  tft.print(string);
  yield();
}

void drawLED() {
  tft.fillScreen(ILI9341_BLACK);
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(3);
  tft.setCursor(box, 2);
  tft.print("LED Control");
  drawButton("LED", box * 1, box * 2);
  drawButton("Back", box * 1, box * 4);
  yield();
  while (1) {
    //LED button
    if (detectTouch(box * 1, box * 2, box * 4, box * 1.5)) {
      delay(200);
      if (detectTouch(box * 1, box * 2, box * 4, box * 1.5)) {
        Serial.print("Detected LED");
        digitalWrite(LED_PIN, !(digitalRead(LED_PIN)); //Toggle
      }
    }
    //Back button
    if (detectTouch(box * 1, box * 4, box * 4, box * 1.5)) {
      delay(200);
      if (detectTouch(box * 1, box * 4, box * 4, box * 1.5)) {
        Serial.print("Detected Back");
        drawWelcome();
        break;
      }
    }
    delay(20);
  }
}

//Function to draw welcome screen
void drawWelcome() {
  tft.fillScreen(ILI9341_WHITE);
  //Welcome text
  tft.setTextColor(ILI9341_BLUE);
  tft.setTextSize(3);
  tft.setCursor(box * 1.5, box * 1);
  tft.println("WELCOME");
  drawButton("DHT", box * 1, box * 2);
  drawButton("LED", box * 1, box * 4);
  yield();
  while (1) {
    //if detect touch in LED button
    if (detectTouch(box * 1, box * 4, box * 4, box * 1.5)) {
      delay(200);
      if (detectTouch(box * 1, box * 4, box * 4, box * 1.5)) {
        drawLED();
        break;
      }
    }
    delay(10);
  }
}
bool detectTouch(int xpos, int ypos, int width, int height) {
  p = ts.getPoint();
  delay(50);
  if (p.x < TS_MINX && p.x > TS_MAXX && p.y > TS_MINY && p.y < TS_MAXY) {
    p.x = map(p.x, TS_MINX, TS_MAXX, 0, tft.width());
    p.y = map(p.y, TS_MINY, TS_MAXY, 0, tft.height());
    Serial.print("X = "); Serial.print(p.x);
    Serial.print("\tY = "); Serial.print(p.y);
    Serial.print("\tPressure = "); Serial.println(p.z);
    //if detect touch in box, then do something
    if (p.x > xpos && p.x < xpos + width && p.y > ypos && p.y < ypos + height) {
      Serial.println("Detected LED");
      return true;
    }
  }
  return false;
}

void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println("FeatherWing TFT");
  if (!ts.begin()) {
    Serial.println("Couldn't start touchscreen controller");
    while (1);
  }
  Serial.println("Touchscreen started");
  ts.begin();
  tft.begin();
  pinMode(LED_PIN, OUTPUT);
  drawWelcome();
}

void loop() {

}
