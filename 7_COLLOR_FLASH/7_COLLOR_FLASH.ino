/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor de led. Se este módulo for alimentado com tensão, uma sequência de cores é emitida automaticamente pelo led
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://sensorkit.joy-it.net/de/sensors/ky-034
 */



int Led = 10;

void setup ()
{
  pinMode (Led, OUTPUT); 
}
 
void loop () 
{
  digitalWrite (Led, HIGH); 
  delay (4000); 
  digitalWrite (Led, LOW); 
  delay (2000); 
}
