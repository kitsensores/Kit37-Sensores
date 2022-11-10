/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO:  sensor detecta campos magnéticos, usando a saída digital do sensor e o LED de status integrado.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://create.arduino.cc/projecthub/WellTronic/ky-003-hall-sensor-module-6c003a
 */

int hallSensorPin = 4;
int hallSensorValue = 0;

void setup() {
  
Serial.begin(9600);
pinMode(hallSensorPin,INPUT);
}

void loop() {
 

hallSensorValue = digitalRead(hallSensorPin);
Serial.print("hallSensorValue: ");
Serial.println(hallSensorValue);

}
