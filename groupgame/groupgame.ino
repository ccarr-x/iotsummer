//HEADERS                    
#include <Adafruit_ILI9341.h> // Hardware-specific library
#include <Adafruit_STMPE610.h>  // Touch Sensor
#include <Adafruit_GFX.h>    // Core graphics library

#define STMPE_CS 16
#define TFT_CS   0
#define TFT_DC   15
#define SD_CS    2

#define TS_MAXX 100
#define TS_MINX 3800
#define TS_MINY 100
#define TS_MAXY 3750


#define boxV 40
#define boxH 80

int number;
int guess;
int minNum = 1;
int maxNum = 9;
bool hasGuessed = false;

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
Adafruit_STMPE610 ts = Adafruit_STMPE610(STMPE_CS);

TS_Point p;
/****************************************************************************************/
//FUNCTIONS

void drawButtons(){    //Can we change this to drawKeypad (less confusing w/ drawButton)
  for(int i = 1; i < 4; i++) {  //rows
    for(int o = 1; o < 4; o++) {  //columns
      tft.drawRect( (boxH*o) -80, (boxV*i)+160, boxH, boxV, ILI9341_WHITE);
      tft.setCursor( (boxH*o) -50, (boxV*i) +170);
      tft.printf("%d",o +( (i-1) *3));
    }
  }
}

void detectNumber(){
  for(int i=1 ;i<4; i++){  //rows
    for(int o=1; o<4; o++){  //columns
      if(p.x < (boxH*o) && p.x > ((boxH*o)-80) && p.y < ((boxV*i)+200) && p.y > ((boxV*i)+160)){
        delay(200);
        if(p.x < (boxH*o) && p.x > ((boxH*o)-80) && p.y < ((boxV*i)+200) && p.y > ((boxV*i)+160)){
          Serial.printf("%d",o+((i-1)*3));
          guess = (o+((i-1)*3));
          hasGuessed = true;
        }
      }
    }
  }
}

void detectButtons(){
  p = ts.getPoint();
  
  if(p.x < TS_MINX && p.x > TS_MAXX && p.y < TS_MAXY && p.y > TS_MINY)
  {
    p.x = map(p.x, TS_MINX, TS_MAXX, 0, tft.width());
    p.y = map(p.y, TS_MINY, TS_MAXY, 0, tft.height());
    
    Serial.print("X = "); Serial.println(p.x);
    Serial.print("Y = "); Serial.println(p.y);
    Serial.print("Pressure = "); Serial.println(p.z);
    detectNumber();
  }
}


void displayResultWIN()                    //DISPLAYS RESULT WHEN WIN
{
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(2);
  tft.setCursor(boxV * 0.75, boxV * 1);
  tft.print("Congradulations!");
  drawButton("Play Again", boxV * 1,boxV * 2);
}

void displayResultLOSE()
{
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(2);
  tft.setCursor(boxV * 1.5, boxV * 1);
  tft.print("You Lose...");
  drawButton("Play Again", boxV * 1,boxV * 2);
}

bool detectTouch(int xpos, int ypos, int width, int height)
{
  p = ts.getPoint();
  delay(50);

  if(p.x < TS_MINX && p.x > TS_MAXX && p.y > TS_MINY && p.y < TS_MAXY)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 0, tft.width());
    p.y = map(p.y, TS_MAXX, TS_MINX, 0, tft.height());

    Serial.print("X = "); Serial.println(p.x);
    Serial.print("Y = "); Serial.println(p.y);
    Serial.print("Pressure = "); Serial.println(p.z);
    if(p.x > xpos && p.x < xpos + width && p.y > ypos && p.y < ypos + height)
    {
      return true;
    }
  }
  return false;
}



void randomizeNumber()
{
  tft.fillScreen(ILI9341_WHITE);
  yield;
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(3);
  tft.setCursor(5,0);
  number = random(minNum,maxNum);
  tft.print("Pick a NumberBetween 1 - 9");
}

void drawButton(char *string, int xpos, int ypos)
{
  tft.drawRect(xpos,ypos,boxV*4,boxV*1.5,ILI9341_BLACK);
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(3);
  tft.setCursor(xpos + boxV * 1.3,ypos + boxV * 0.5);
  tft.print(string);
  yield();
}



void goLower() {
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_RED);
  tft.setTextSize(3);
  tft.setCursor(boxV * 0.5, boxV * 2);
  tft.printf("YOU CHOSE: %d", guess);
  tft.setTextColor(ILI9341_BLUE);
  tft.setTextSize(2);
  tft.setCursor(boxV * 0.5, boxV * 4);
  tft.println("CLUE: AIM LOWER");
  yield();
}

void goHigher() {
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_BLUE);
  tft.setTextSize(3);
  tft.setCursor(boxV*0.5, boxV*2);
  tft.printf("YOU CHOSE: %d", guess);
  tft.setTextColor(ILI9341_RED);
  tft.setTextSize(2);
  tft.setCursor(boxV*0.5, boxV*4);
  tft.println("CLUE: AIM HIGHER");
  yield();
}

void correct() {
  tft.fillScreen(ILI9341_WHITE);
    tft.setTextColor(ILI9341_GREEN);
    tft.setTextSize(5);
    tft.setCursor(boxV*1, boxV*2);
    tft.println("CORRECT!");
    tft.setTextColor(ILI9341_BLUE);
    tft.setTextSize(3);
    tft.setCursor(boxV*1, boxV*4);
    tft.printf("THE ANSWER WAS: %d", number);
    yield();
}


/******************************************************************************************************/
void setup() {
  Serial.begin(115200);
  tft.begin();
  ts.begin();
  randomizeNumber();
  drawButtons();
}

void loop() { 
  detectButtons();
  if(hasGuessed){
    hasGuessed = false;
    if (guess > number) {
      goLower();
      delay(3000);
    drawButtons();
    }
    if(guess < number) {
    goHigher();
    delay(3000);
    drawButtons();
    }
    if(guess == number) {
    correct();
    delay(3000);
    displayResultWIN();
    }
}




#include <Adafruit_ILI9341.h> // Hardware-specific library
#include <Adafruit_STMPE610.h>  // Touch Sensor
#include <Adafruit_GFX.h>    // Core graphics library

#define STMPE_CS 16
#define TFT_CS   0
#define TFT_DC   15
#define SD_CS    2

#define TS_MAXX 100
#define TS_MINX 3800
#define TS_MINY 100
#define TS_MAXY 3750


#define boxV 40
#define boxH 80

int number;
int guess;
int minNum = 1;
int maxNum = 9;
bool hasGuessed = false;

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
Adafruit_STMPE610 ts = Adafruit_STMPE610(STMPE_CS);

TS_Point p;
/****************************************************************************************/
//FUNCTIONS

void drawButtons(){  //Can we change this to drawKeypad (less confusing w/ drawButton)
  for(int i = 1; i  < 4; i++) {  //rows
    for(int o = 1; o < 4; o++) {  //columns
      tft.drawRect( (boxH*o) -80, (boxV*i)+160, boxH, boxV, ILI9341_WHITE);
      tft.setCursor( (boxH*o) -50, (boxV*i) +170);
      tft.printf("%d",o +( (i-1) *3));
    }
  }
}

void detectNumber(){
  for(int i=1 ;i<4; i++){  //rows
    for(int o=1; o<4; o++){  //columns
      if(p.x < (boxH*o) && p.x > ((boxH*o)-80) && p.y < ((boxV*i)+200) && p.y > ((boxV*i)+160)){
        delay(200);
        if(p.x < (boxH*o) && p.x > ((boxH*o)-80) && p.y < ((boxV*i)+200) && p.y > ((boxV*i)+160)){
          Serial.printf("%d",o+((i-1)*3));
          guess = (o+((i-1)*3));
          hasGuessed = true;
        }
      }
    }
  }
}

void detectButtons(){
  p = ts.getPoint();
  
  if(p.x < TS_MINX && p.x > TS_MAXX && p.y < TS_MAXY && p.y > TS_MINY)
  {
    p.x = map(p.x, TS_MINX, TS_MAXX, 0, tft.width());
    p.y = map(p.y, TS_MINY, TS_MAXY, 0, tft.height());
    
    Serial.print("X = "); Serial.println(p.x);
    Serial.print("Y = "); Serial.println(p.y);
    Serial.print("Pressure = "); Serial.println(p.z);
    detectNumber();
  }
}


void displayResultWIN()         //DISPLAYS RESULT WHEN WIN
{
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(2);
  tft.setCursor(0, boxV * 1);
  tft.print("Congradulations!");
  drawButton("Play Again", boxV * 1,boxV * 2);
}

void displayResultLOSE()
{
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(2);
  tft.setCursor(boxV * 1.5, boxV * 1);
  tft.print("You Lose...");
  drawButton("Play Again", boxV * 1,boxV * 2);
}


void randomizeNumber()
{
  tft.fillScreen(ILI9341_WHITE);
  yield;
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(3);
  tft.setCursor(5,0);
  number = random(minNum,maxNum);
  tft.print("Pick a NumberBetween 1 - 9");
}

void drawButton(char *string, int xpos, int ypos)
{
  tft.drawRect(xpos,ypos,boxV*4,boxV*5,ILI9341_BLACK);
  tft.setTextColor(ILI9341_BLACK);
  tft.setTextSize(3);
  tft.setCursor(xpos + boxV * 1.3,ypos + boxV * 0.5);
  tft.print(string);
  yield();
}

void goLower() {
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_RED);
  tft.setTextSize(5);
  tft.setCursor(boxV * 1, boxV * 2);
  tft.printf("YOU CHOSE: %d", guess);
  tft.setTextColor(ILI9341_BLUE);
  tft.setTextSize(3);
  tft.setCursor(boxV * 1, boxV * 4);
  tft.println("CLUE: AIM LOWER");
  yield();
}

void goHigher() {
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_BLUE);
  tft.setTextSize(5);
  tft.setCursor(boxV*1, boxV*2);
  tft.printf("YOU CHOSE: %d", guess);
  tft.setTextColor(ILI9341_RED);
  tft.setTextSize(3);
  tft.setCursor(boxV*1, boxV*4);
  tft.println("CLUE: AIM HIGHER");
  yield();
}

void correct() {
  tft.fillScreen(ILI9341_WHITE);
  tft.setTextColor(ILI9341_GREEN);
  tft.setTextSize(5);
  tft.setCursor(boxV*1, boxV*2);
  tft.println("CORRECT!");
  tft.setTextColor(ILI9341_BLUE);
  tft.setTextSize(3);
  tft.setCursor(boxV*1, boxV*4);
  tft.printf("THE ANSWER WAS: %d", number);
  yield();
}


/******************************************************************************************************/
void setup() {
  Serial.begin(115200);
  tft.begin();
  ts.begin();
  randomizeNumber();
  drawButtons();
}

void loop() {
  detectButtons();
  if(hasGuessed){
    hasGuessed = false;
    if (guess > number) {
    goLower();
    delay(3000);
    drawButtons();
    }
    if(guess < number) {
    goHigher();
    delay(3000);
    drawButtons();
    }
    if(guess == number) {
    correct();
    delay(3000);
    displayResultWIN();
  }
  }
}
