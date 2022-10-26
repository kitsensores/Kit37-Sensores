int led = 13; 
int digitalPin = 2; 
int analogPin = A0; 
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
