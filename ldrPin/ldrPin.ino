int ldrPin = A0;
int analogValue = 0;
void setup() {
Serial.begin(9600);
}

void loop() {
analogValue = analogRead(ldrPin);
Serial.println(analogValue);
delay(50);
}
