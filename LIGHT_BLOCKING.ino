int sensorPin = 8;   // Can be any digital input pin
int ledPin = 13;       // Pin that on-board LED is connected to
int sensorVal = 0;  // variable to store the value coming from the sensor
//===============================================================================
//  Initialization
//===============================================================================
void setup() {
  pinMode(ledPin, OUTPUT); // LED pin as output
  pinMode(sensorPin, INPUT); //Sensor pin as input
}
//===============================================================================
//  Main
//=============================================================================== 
void loop() {
  sensorVal = digitalRead(sensorPin); //read the value of the sensor 
  if(sensorVal == HIGH) // turn on LED when sensor is blocked 
  {
    digitalWrite(ledPin,HIGH);
  }
  else
  {
    digitalWrite(ledPin,LOW);
  }
}
