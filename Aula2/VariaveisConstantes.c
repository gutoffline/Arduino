// pino do led vermelho
#define LedVermelho 13 
#define LedVerde 12
int LedAmarelo = 11;
/*
boolean: valor verdadeiro (true) ou falso (false)
char: um caractere
int: número inteiro
float: número real
string: sequência de caracteres
void: tipo vazio (não tem tipo)
*/
void setup()
{
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  pinMode(LedAmarelo, OUTPUT);
}

void loop()
{

  LedVermelho = 5;
  
  digitalWrite(LedVermelho, HIGH);
  digitalWrite(LedVerde, HIGH);
  digitalWrite(LedAmarelo, HIGH);
  delay(1000); 
  digitalWrite(LedVermelho, LOW);
  digitalWrite(LedVerde, LOW);
  digitalWrite(LedAmarelo, LOW);
  delay(1000); 
}