
/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor de som que funciona como um microfone que detecta sinais sonoros
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://sensorkit.joy-it.net/en/sensors/ky-038
 */

int led = 13; // define o pino do led 13
int digitalPin = 2;  // define o pino digital 2
int analogPin = A0; // define o pino analogico A0
int digitalVal; 
int analogVal; 
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  //pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin);
  if(digitalVal == HIGH) 
  {
    digitalWrite(led, HIGH); 
  }
  else
  {
    digitalWrite(led, LOW); 
  }
  // Read the analog interface
  analogVal = analogRead(analogPin);
  Serial.println(analogVal); 
  delay(100);
}
