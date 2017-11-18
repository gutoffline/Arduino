int led = 5;           
int brilho = 0;    
int aumento = 5;    

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  analogWrite(led, brilho);

  brilho = brilho + aumento;

  if (brilho <= 0 || brilho >= 255) {
    aumento = -aumento;
  }
  delay(30);
}