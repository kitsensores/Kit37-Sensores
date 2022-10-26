int buttonPin = 4;
int ledPin = 3;

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
