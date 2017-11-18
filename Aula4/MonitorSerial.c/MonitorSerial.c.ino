#define LED_VERMELHO 13
int estado = 1;

void setup() {
  pinMode(LED_VERMELHO,OUTPUT);
  Serial.begin(9600); //configura comunicação serial com 9600 bps
}
 
void loop() {
  
  if(Serial.available()){
  
    estado = Serial.parseInt();
    
    Serial.println(estado);
    
    if(estado == 0){
      Serial.println("Desligado");
      digitalWrite(LED_VERMELHO, 0);
    }else{
      Serial.println("Ligar");
      digitalWrite(LED_VERMELHO, 1);
    }
  }
  
  delay(1000);
}


  
  
  
