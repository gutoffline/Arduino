void setup()
{
  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(4, LOW);
}