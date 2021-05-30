/*
=======================================================

 *************  https://github.com/vinojv96/  *********

=======================================================
 HC-SR04 Ping distance sensor:
 VCC to arduino 5v 
 GND to arduino GND
 Echo to Arduino pin 9 
 Trig to Arduino pin 8 */
#define echopin  9 // echo pin
#define trigpin 8 // Trigger pin

int maximumRange = 50;
long duration, distance;

void setup() {
  Serial.begin (9600);
  pinMode (trigpin, OUTPUT);
  pinMode (echopin, INPUT );
  pinMode (13,OUTPUT);
}
  
void loop ()
{
  {
    digitalWrite(trigpin,LOW);
    delayMicroseconds(2);
    
    digitalWrite(trigpin,HIGH);
    delayMicroseconds(10);
    
    duration=pulseIn (echopin,HIGH);
    
    distance= duration/58.2;
    delay (50);
    Serial.println(distance);
    delay(1000);
  }
  
 if (distance < 20 ){
   digitalWrite (13,HIGH);
 }
 else digitalWrite (13,LOW);
}
