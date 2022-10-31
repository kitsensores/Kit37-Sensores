/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO:O sensor reage na presença de um campo magnético.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 */



int sensorPin = 2; // define o sensor ligado ao pino analogico 2
int value = 0; 
void setup() {
	Serial.begin(9600); 
} 
void loop() {
	value = analogRead(sensorPin); 
	Serial.println(value, DEC); // light intensity
								// high values for bright environment
								// low values for dark environment
	delay(100); 
}
