void setup()
{
  pinMode(2, INPUT);
  pinMode(3,OUTPUT);

  Serial.begin(9600);

}

void loop()
{
  digitalWrite(3, LOW);
  int motion=digitalRead(2);
  Serial.print(motion);
  if(motion == 1)
  {
    digitalWrite(3,HIGH);
    delay(200); 
  }
  delay(500); 
}