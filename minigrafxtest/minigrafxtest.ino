#include "ILI9341_SPI.h"
#include <MiniGrafx.h>
#include "satisfyfont.h"
#include "icon.h"

#define STMPE_CS 16  //chip select
#define TFT_CS   0   //tft
#define TFT_DC   15  //Data/Clock - Multiplexing
#define SD_CS    2   //chip select
#define TFT_LED 5

//custom color palette
#define COLOR_BLACK 0X0000
#define COLOR_WHITE 0XFFFF
#define COLOR_BLUE 0X1395
#define COLOR_ORANGE 0XFDA9

int BITS_PER_PIXEL = 2;
uint16_t palette[] = {    //array of colors
  COLOR_BLACK,  //0
  COLOR_WHITE,  //1
  COLOR_BLUE,   //2
  COLOR_ORANGE, //3
};

ILI9341_SPI tft = ILI9341_SPI(TFT_CS, TFT_DC);
MiniGrafx gfx = MiniGrafx(&tft, BITS_PER_PIXEL, palette);

void displayTFT(){
  gfx.setColor(3);
  gfx.drawLine(0, 0, 240, 320);
  gfx.setColor(2);
  gfx.drawCircle(120, 160, 120);
  gfx.setColor(1);
  gfx.setFont(Satisfy_Regular_24);
  gfx.drawString(10, 10, "Cara\nCarr");
  gfx.drawPalettedBitmapFromPgm(0, 100, weathericon);
  gfx.commit();
}

void setup() {
  pinMode(TFT_LED, OUTPUT);
  digitalWrite(TFT_LED, HIGH);
  gfx.init();
  gfx.fillBuffer(0);
  gfx.commit();
  displayTFT();
}

void loop() {
  // put your main code here, to run repeatedly:

}
