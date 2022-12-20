/* INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: Xbee arduimo
 ESTAGIARIO: RHYAN ROBERTO FERREIRA SANTOS
 DATA: 20/12/2022
*/


// Botões
int botao1 = 13;
int botao2 = 12;
int botao3 = 11;
bool ebotao1 = LOW;;
bool ebotao2 = LOW;;
bool ebotao3 = LOW;;


void setup() {

  pinMode(botao1, INPUT_PULLUP);
  pinMode(botao2, INPUT_PULLUP);
  pinMode(botao3, INPUT_PULLUP);
  Serial.begin(9600);
}


void loop() {
  ebotao1=digitalRead(botao1);
  ebotao2=digitalRead(botao2);
  ebotao3=digitalRead(botao3);
  
  switch (ebotao1)
{
   case HIGH:
     Serial.println("A");
   break;

   case LOW:
      Serial.println("a");
   break;

   default:
   break; 
}
  
 switch (ebotao2)
{
   case HIGH:
     Serial.println("B");
   break;

   case LOW:
      Serial.println("b");
   break;

   default:
   break; 
} 
  
   switch (ebotao3)
{
   case HIGH:
     Serial.println("C");
   break;

   case LOW:
      Serial.println("c");
   break;

   default:
   break; 
} 
  delay (500);
}
