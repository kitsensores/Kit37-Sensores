/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: é um sensor de inclinação.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://electrosome.com/interfacing-mercury-tilt-switch-arduino-uno/
 */

int sensorPin = 10;
int forwardLED = 12;


void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(forwardLED, OUTPUT);

}

void loop() {
  int read = digitalRead(sensorPin);

  if (read == HIGH) {
    digitalWrite(forwardLED, HIGH);
  
  }

  if (read == LOW) {

    digitalWrite(forwardLED, LOW);
  }
}
