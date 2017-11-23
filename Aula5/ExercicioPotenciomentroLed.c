100 - 400  1º LED
401 - 700  2º LED
701 - 1000 3º LED

long valor;
 
void setup() {
  Serial.begin(9600);
  Serial.println("Inicio");
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}
 
void loop() {
  valor = analogRead(A0);
 
  Serial.print("Valor = ");
  Serial.println(valor);
  if(valor < 100){
	digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,0);
  }
  if(valor >= 100 && valor <= 400){
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,1);
  }

  if(valor >= 401 && valor <= 700){
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,0);
  }

  if(valor >= 701){
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
  }
  
  delay(1000);
}