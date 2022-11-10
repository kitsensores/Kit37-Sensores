/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor de sinais sonoros, que quando conectado à microcontroladores emitem os sinais sonoros. 
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://arduinomodules.info/ky-012-active-buzzer-module/ 
 */



int buzzerPin = 8; // define o funcionamento do sensor ligado ao pino 8
void setup ()
{
  pinMode (buzzerPin, OUTPUT);
}
void loop ()
{
  digitalWrite (buzzerPin, HIGH);
  delay (500);
  digitalWrite (buzzerPin, LOW);
  delay (500);
}
