#define PIN_LED 13

unsigned int count, toggle;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(115200);
  while(!Serial){}
  Serial.println("Hello, world!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

int toggle_state(int t){
  return !t;
}
