/* INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: Xbee arduimo
 ESTAGIARIO: RHYAN ROBERTO FERREIRA SANTOS
 DATA: 20/12/2022
*/


//Controle das leds 
int led = 6; //led vermelho
int led2 = 10; //led amarelo
int led3 = 13; //led verde
char comando;

void setup() {
 
  pinMode(led, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  
  if(Serial.available()>0){
   comando= Serial.read();
  
    switch (comando)
{
   case 'A':
     digitalWrite(led, LOW); 
   break;

   case 'a':
      digitalWrite(led, HIGH);
   break;
   
   case 'B':
      digitalWrite(led2, LOW);
   break;
      
   case 'b':
      digitalWrite(led2, HIGH);
   break;
      
   case 'C':
      digitalWrite(led3, LOW);
   break;
      
   case 'c':
      digitalWrite(led3, HIGH);
   break;

   default:
   break; 
}
  }
}
