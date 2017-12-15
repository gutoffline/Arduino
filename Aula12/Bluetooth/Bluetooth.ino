/*
AT+NAME=CursoSenac-01 - Atera o nome para do módulo para "CursoSenac-01";
AT+PSWD=321rc - Altera a senha para "321rc"
AT+RESET - Reseta o Módulo e aplica as alterações feitas.
*/

#include "SoftwareSerial.h"

SoftwareSerial bluetooth(10, 11); //TX, RX (Bluetooth)

void setup() {
  Serial.begin(9600);
  Serial.println(F("Type the AT commands:"));

  bluetooth.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char r = Serial.read(); 
    bluetooth.print(r); 
    Serial.print(r); 
  }
  
  if (bluetooth.available()) {
    char r = bluetooth.read();
    Serial.print(r); 
  }
}

