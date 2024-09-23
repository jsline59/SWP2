#define ledOn 0
#define ledOff 1
#define ledPin 7
void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, ledOn);
  delay(1000);
  
  for(int i = 0; i < 5; i++){
    digitalWrite(ledPin, ledOff);
    delay(100);
    digitalWrite(ledPin, ledOn);
    delay(100);
  }
  digitalWrite(ledPin, ledOff);

  while(1){} // infinite loop
}
