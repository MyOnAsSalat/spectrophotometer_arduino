
void setup() 
{
  Serial.begin(9600); 
analogReference(INTERNAL);
}

void loop() 
{
  if (Serial.available() > 0) 
  {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(10);
  }
}
