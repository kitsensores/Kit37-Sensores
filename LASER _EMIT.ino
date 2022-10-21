
/*Laser module with Arduino.
 * http://srituhobby.com
 */
 
#define laser 2
#define sensor 3
#define LED 8
#define buzzer 5

void setup() {
  Serial.begin(9600);
  pinMode(laser, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(laser, HIGH);
}

void loop() {
  bool value = digitalRead(sensor);

  if (value == 0) { //
    digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(LED, LOW);
    digitalWrite(buzzer, LOW);
  }
}
