#include <Servo.h>
Servo myservo;
int pwm = 4;
int ldrPin = A0;
int analogValue = 0;

void setup() {
Serial.begin(9600);
myservo.attach(pwm);
myservo.write(90);
}

void loop() {
analogValue = analogRead(ldrPin);
Serial.println(analogValue);
int pwmOut = map(analogValue, 0, 1024, 0, 180);
myservo.write(pwmOut);
delay(100);
}
