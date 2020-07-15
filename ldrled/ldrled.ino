int ldrPin = A0;
int analogValue = 0;
int redLED = 5;
int greenLED = 4;
void setup() {
Serial.begin(9600);
pinMode(greenLED, OUTPUT);
pinMode(redLED, OUTPUT);
}

void loop() {
analogValue = analogRead(ldrPin);
Serial.println(analogValue);
delay(50);
if(analogValue>=100&&analogValue<=400){
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);
}
else if(analogValue>=401&&analogValue<=700){
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
}
else if(analogValue>=701&&analogValue<=1024){
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, HIGH); 
} 
}
