int potenciometro = A0;
long valor = 0;
int ledVermelho = 3;

void setup(){
  Serial.begin(9600);
    pinMode(ledVermelho, OUTPUT);
}

void loop(){
  valor = analogRead(potenciometro); // 0 - 1023 
    Serial.print("Sensor = ");
    Serial.println(valor);
  long NOVO_VALOR = 0;
  //map(potenciometro , inicio, fim , inicio , fim) 
  NOVO_VALOR = map(valor , 0 , 1023 , 0 , 255);
    analogWrite(ledVermelho, NOVO_VALOR); // 0 - 255
  delay(10);
}
