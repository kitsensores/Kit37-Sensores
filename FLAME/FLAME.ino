
/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor que detecta a presença de chama, além de ser um sensor infravermelho.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://www.electroniclinic.com/flame-sensor-arduino-fire-sensor-arduino-circuit-diagram-programming/
 */
 
#define F_Sensor 2 // connect DO pin of the flame sensor with the Arduino's digital pin 2
#define Relay_Buzzer 8 // A relay module is connected with the Arduino's pin number 8
 
 
void setup() {
 
  Serial.begin(9600); // Baud Rate
  Serial.println("Flame Sensor Project by Electronic Clinic");
  pinMode(F_Sensor, INPUT);//define F_Sensor input pin
  pinMode(Relay_Buzzer, OUTPUT);//define Relay_Buzzer output pin
 
}
 
void loop() {
   
 
  int fire = digitalRead(F_Sensor);// read F_Sensor sensor
 
 
  if( fire == HIGH)
  {
    digitalWrite(Relay_Buzzer,HIGH);// set the buzzer ON
    Serial.println("Fire Detected");
  }
  else
  {
    digitalWrite(Relay_Buzzer,LOW); // Set the buzzer OFF
    Serial.println("Peace");
  }
 
  delay(1000);
}
