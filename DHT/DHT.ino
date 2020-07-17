#include <DHT.h>
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT Test:");
  dht.begin();
}

void loop() {
  float t = dht.readTemperature(true);
  Serial.println(t);
  delay(2000);
}
