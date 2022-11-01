/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor de led. Se este módulo for alimentado com tensão, uma sequência de cores é emitida automaticamente pelo led
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 */



int Led = 10;

void setup ()
{
  pinMode (Led, OUTPUT); // Initialisierung Ausgangspin für die LED
}
 
void loop () //Hauptprogrammschleife
{
  digitalWrite (Led, HIGH); // LED wird eingeschaltet
  delay (4000); // Wartemodus für 4 Sekunden
  digitalWrite (Led, LOW); // LED wird ausgeschaltet
  delay (2000); // Wartemodus für weitere zwei Sekunden in denen die LED dann ausgeschaltet ist
}
