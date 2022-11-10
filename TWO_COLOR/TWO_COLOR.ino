/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO:  emite as seguintes cores, verde e vermelha.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://arduinomodules.info/ky-029-dual-color-led-module/
 */



int redpin = 11;  // Define o pino do led vermelho
int greenpin = 10;// Define o pino do led verde
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
