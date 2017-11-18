#define LED_VERMELHO 13
bool mudar = true;

void setup() {
  pinMode(LED_VERMELHO,OUTPUT);
  Serial.begin(9600); 
}
 
void loop() {
	Serial.println(mudar);
	delay(500);
	Serial.println(!mudar);
	delay(500);
}


	
	
	