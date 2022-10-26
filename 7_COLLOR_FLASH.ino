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
