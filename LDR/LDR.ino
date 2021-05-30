const int LED = 13;
const int LDR = A0;
int input_value = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  input_value = analogRead(LDR);
  Serial.print("LDR Value is: ");
  Serial.println(input_value);
  delay(1000);
  if (input_value < 300){
    digitalWrite( LED , HIGH);
  }
  else
  digitalWrite( LED, LOW);
}
