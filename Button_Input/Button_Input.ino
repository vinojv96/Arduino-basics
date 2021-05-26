void setup() {
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int btn = digitalRead(2);
  if(btn == HIGH){
    digitalWrite(8, HIGH);
  }
  else
  digitalWrite(8, LOW);
  // put your main code here, to run repeatedly:

}
