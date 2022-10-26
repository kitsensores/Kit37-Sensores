int sensorPin = 10;
int forwardLED = 12;


void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(forwardLED, OUTPUT);

}

void loop() {
  int read = digitalRead(sensorPin);

  if (read == HIGH) {
    digitalWrite(forwardLED, HIGH);
  
  }

  if (read == LOW) {

    digitalWrite(forwardLED, LOW);
  }
}
