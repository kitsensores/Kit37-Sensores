int redpin = 11;  // pin for the red LED
int greenpin = 10;// pin for the green LED
int val;
void setup() 
{
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  for(val = 255; val > 0; val--)
  {
    analogWrite(redpin, val);
    analogWrite(greenpin, 255 - val);
    delay(10);
  }
  Serial.println("Green");
  delay(1000);
  
  for(val = 0; val < 255; val++)
  {
    analogWrite(redpin, val);
    analogWrite(greenpin, 255 - val);
    delay(10); 
  }
  Serial.println("Red");
  delay(1000); 

}
