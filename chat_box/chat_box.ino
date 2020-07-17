#include <SoftwareSerial.h>
SoftwareSerial mySerialPort(4,5); //Rx(serial pin), Tx(transmitter)
char msgIn, msgOut;

void setup() {
  Serial.begin(9600); //Serial communication for the serial monitor
  mySerialPort.begin(9600); //Communication between serial monitor and software serial
}

void loop() {
  //While i have data in the SoftwareSerial buffer, run this loop
  while(mySerialPort.available()) {
    msgIn = mySerialPort.read(); //read each character at a time
    Serial.print(msgIn);
    delay(2);
  }
  //while i have data in serial buffer, run this loop
  while(Serial.available()) {
    msgOut = Serial.read(); //system has to read the message sent in before it send it out
    mySerialPort.write(msgOut);
    delay(2);
  }
}
