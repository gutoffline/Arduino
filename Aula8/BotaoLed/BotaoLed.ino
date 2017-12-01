#define led 13
#define botao 7
int var=0;      
int resultado = 0;  // NOVO
void setup(){
  pinMode(led,OUTPUT);
  pinMode(botao,INPUT);
  Serial.begin(9600);
}

void loop(){
  var=digitalRead(botao); 
  if(var == 1){
  resultado = !resultado;
  digitalWrite(led, resultado);
  //digitalWrite(led, !digitalRead(led));
  }
  Serial.println("Resultado");
  Serial.println(resultado);
  delay(10);
}
