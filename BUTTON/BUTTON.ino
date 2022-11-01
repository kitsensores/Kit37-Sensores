/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: componentes eletrônicos mais utilizados para prototipagem de projetos. Esta chave é um tipo de interruptor pulsador (conduz somente quando está pressionado) 
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 */


int buttonPin = 4; // define o funcionamento do sensor
int ledPin = 3; // define o led

bool buttonState = false;

void setup() {
pinMode(buttonPin,INPUT);
pinMode(ledPin,OUTPUT);

}
void loop() {
  
buttonState = digitalRead(buttonPin);

 if ( buttonState == true){
  digitalWrite(ledPin, HIGH);
 }
else {
  digitalWrite(ledPin, LOW);
}


}
