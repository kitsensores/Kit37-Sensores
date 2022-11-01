
/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor digital temp mede as mudanças de temperatura com base na resistência do termistor.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 */




int led = 13;  // define p led no pino 13
int digitalPin = 2; // define o pino do sensor digital no pino 2
int analogPin = A0; //  define o pino do sensor analogico ao pino A0
int digitalVal; 
int analogVal; 
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  
  Serial.begin(9600);
}
void loop()
{
 
  digitalVal = digitalRead(digitalPin);
  if(digitalVal == HIGH) 
  {
    digitalWrite(led, HIGH); 
  }
  else
  {
    digitalWrite(led, LOW);
  }
  
  analogVal = analogRead(analogPin);
  Serial.println(analogVal);   delay(100);
}
