int red = 4;
int green = 5;
int blue = 2;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(red, LOW);                      
  digitalWrite(green, LOW);    
    delay(500);   
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
    delay(500); 
  digitalWrite(red, HIGH); 
  digitalWrite(green, LOW);  
    delay(500);      
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);                                     
}
