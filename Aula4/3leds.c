#define LED_VERMELHO 13
#define LED_VERDE 12
#define LED_AMARELO 11
int estado = 1;

void setup() {
  pinMode(LED_VERMELHO,OUTPUT);
  pinMode(LED_VERDE,OUTPUT);
  pinMode(LED_AMARELO,OUTPUT);
  Serial.begin(9600); //configura comunicação serial com 9600 bps
}
 
void loop() {
	
	if(Serial.available()){
	
		estado = Serial.parseInt();
		
		Serial.println(estado);
		
		if(estado == 1){
			digitalWrite(LED_VERMELHO, !digitalRead(LED_VERMELHO));
		}
		if(estado == 2){
			digitalWrite(LED_VERDE, !digitalRead(LED_VERDE));
		}
		if(estado == 3){
			digitalWrite(LED_AMARELO, !digitalRead(LED_AMARELO));
		}
		
	}
	
	delay(1000);
}


	
	
	