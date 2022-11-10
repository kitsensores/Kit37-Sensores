/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor que  usa o detector em forma de controle (IR para detectar objetos que se movem através dos módulos U.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://protosupplies.com/product/light-block-sensor-module/
 */


int sensorPin = 8;   
int ledPin = 13;      
int sensorVal = 0;  

void setup() {
  pinMode(ledPin, OUTPUT); 
  pinMode(sensorPin, INPUT); 
}

void loop() {
  sensorVal = digitalRead(sensorPin); 
  if(sensorVal == HIGH)
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
