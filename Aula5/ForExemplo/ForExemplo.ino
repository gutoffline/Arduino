
void setup()
{
  pinMode(13, OUTPUT);

  //for(inicio ; condição ; incremento)
  for(int controle = 0; controle < 10 ; controle++ ){
    digitalWrite(13, HIGH);
  delay(500); 
  digitalWrite(13, LOW);
  delay(500); 
  }

}

void loop()
{

}
