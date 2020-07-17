#include <DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
int red = 5;
int green = 2;
int blue = 16;
void setup() {
  Serial.begin(9600);
  Serial.println("DHT Test:");
  dht.begin();
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
   float t = dht.readTemperature(true);
  Serial.println(t);
  delay(2000);
 if(t >= 80){ 
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);                      
   delay(500);   
 }
 if(t < 80){
 digitalWrite(red, HIGH);
 digitalWrite(blue, LOW);
    delay(500); 
 }                              
}
