/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor que pode produzir uma variedade de tons sonoros 
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://arduinomodules.info/ky-006-passive-buzzer-module/
 */


int buzzer = 8; // set the buzzer control digital IO pin
void setup() {
	pinMode(buzzer, OUTPUT); // set pin 8 as output
}
void loop() {
	for (int i = 0; i < 100; i++) {  // make a sound
		digitalWrite(buzzer, HIGH); // send high signal to buzzer 
		delay(1); // delay 1ms
		digitalWrite(buzzer, LOW); // send low signal to buzzer
		delay(1);
	}
	delay(50);
	for (int j = 0; j < 100; j++) { //make another sound
		digitalWrite(buzzer, HIGH);
		delay(2); // delay 2ms
		digitalWrite(buzzer, LOW);
		delay(2);
	}
	delay(500);
}
