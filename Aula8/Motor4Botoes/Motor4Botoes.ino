#define  MOTOR 11

#define BOT_PARADO 7
#define BOT_LENTO  6
#define BOT_RAPIDO 5
#define BOT_MAXIMO 4

void setup() {
  
  //  Pinos dos botões, entrada.
  pinMode (BOT_PARADO, INPUT);
  pinMode (BOT_LENTO,  INPUT);
  pinMode (BOT_RAPIDO, INPUT);
  pinMode (BOT_MAXIMO, INPUT);
  Serial.begin(9600);

  // Observe que não configuramos o pino para o motor,
  // pois ele vai ser comandado como uma saída de PWM
  // (analógica)
  
}

// Função loop:  Teste dos botões e comando do motor
void loop() {
  // Se um botão é pressionado, a velocidade correspondente
  // é configurada na saída PWM de comando do motor.
  Serial.println(BOT_PARADO);
  if ( digitalRead (BOT_PARADO) == HIGH)
       analogWrite ( MOTOR, 0);  // Motor para, com PWM de 0%
  
  if ( digitalRead (BOT_LENTO) == HIGH)
       analogWrite ( MOTOR, 77);  // Motor para, com PWM de 30%
  
  
  if ( digitalRead (BOT_RAPIDO) == HIGH)
       analogWrite ( MOTOR, 179);  // Motor gira rapidamente, com PWM de 70%
  
  if ( digitalRead (BOT_MAXIMO) == HIGH)
       analogWrite ( MOTOR, 255);  // Motor gira com máxima velocidade (PWM de 100%)
        
}
