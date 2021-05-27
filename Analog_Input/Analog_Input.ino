void setup() {
pinMode(3, OUTPUT);
}

void loop() {
int sensorValue = (analogRead (A0));
digitalWrite(3,HIGH);
delay(sensorValue);
digitalWrite(3, LOW);
delay(sensorValue);

}
