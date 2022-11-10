/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: o sensor de  um interruptor de mercúrio é um tipo de interruptor em que os contatos são fechados por uma gota de mercúrio
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://arduinomodules.info/ky-027-magic-light-cup-module/
 */

int ledPinA = 9;
int switchPinA = 8;
int switchStateA = 0;
int ledPinB = 6;
int switchPinB = 7;
int switchStateB = 0;
int brightness   = 0;
void setup() 
{
  pinMode(ledPinA, OUTPUT); 
  pinMode(ledPinB, OUTPUT);  
  pinMode(switchPinA, INPUT); 
  pinMode(switchPinB, INPUT);
}
void loop() 
{
  switchStateA = digitalRead(switchPinA);
  if (switchStateA == HIGH && brightness != 255)
  { 
   brightness ++;
  } 
  switchStateB = digitalRead(switchPinB);
  if (switchStateB == HIGH && brightness != 0)
  { 
   brightness --;
  } 
  analogWrite(ledPinA, brightness);  //  A slow fade out
  analogWrite(ledPinB, 255 - brightness);  // B slow bright up
  delay(20);
}
