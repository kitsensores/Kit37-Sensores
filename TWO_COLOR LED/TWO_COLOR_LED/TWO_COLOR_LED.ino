/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: emite luz vermelha e verde. Você pode ajustar a intensidade de cada cor usando PWM.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
https://arduinomodules.info/ky-011-two-color-led-module-3mm/
 */




int redpin = 9; // pin for red signal
int greenpin = 10; // pin for green signal
int val;
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
}
void loop() {
  for(val = 255; val > 0; val--) { 
    analogWrite(redpin, val); //dim red
    analogWrite(greenpin, 255 - val); // brighten green
    delay(15);
  }
  for(val = 0; val < 255; val++) { 
    analogWrite(redpin, val); //brighten red
    analogWrite(greenpin, 255 - val); //dim green
    delay(15);
  }
}
