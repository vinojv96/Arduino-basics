void setup() {
 pinMode(2, INPUT_PULLUP);
 Serial.begin(9600);
}

void loop() {
  int btn = (digitalRead (2));
  if (btn == LOW){
    Serial.println("Button Pressed");
    delay(250);
  }

}
