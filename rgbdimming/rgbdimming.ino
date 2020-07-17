int red = 4;
int green = 5;
int blue = 2;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
analogWriteRange(255);
digitalWrite(red, HIGH);
digitalWrite(green, HIGH);
digitalWrite(blue, HIGH);
}

// the loop function runs over and over again forever
void loop() {                   
  analogWrite(green, 255);    
  delay(500);
  analogWrite(green, 0); 
  for(int i = 255; i >= 0; i--){
    analogWrite(green, 255-i);
    analogWrite(red, 255- (i/2));
    delay(10);                               
  }
  delay(1000);
}
