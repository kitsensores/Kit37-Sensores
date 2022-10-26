int led = 13; 
int digitalPin = 2; 
int analogPin = A0;
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
