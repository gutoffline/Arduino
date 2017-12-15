const int SW_pin = 2; // Switch
const int X_pin = 0; // Eixo X
const int Y_pin = 1; // Eixo Y

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(115200);
}

void loop() {
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("Eixo X: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Eixo Y: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");
  delay(500);
}
