/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO:  são dispositivos elétricos cuja função é produzir modificações súbitas, porém predeterminadas em um ou mais circuitos elétricos de saída.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://create.arduino.cc/projecthub/peterclement/working-with-relay-with-arduino-b777e6
 */


int relayPin = 8;    

void setup()
{
pinMode(relayPin, OUTPUT);     
}

void loop()
{
digitalWrite(relayPin, HIGH);       
delay(1000);
digitalWrite(relayPin,LOW);        
delay(1000);
