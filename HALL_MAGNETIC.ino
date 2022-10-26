int hallSensorPin = 4;
int hallSensorValue = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(hallSensorPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

hallSensorValue = digitalRead(hallSensorPin);
Serial.print("hallSensorValue: ");
Serial.println(hallSensorValue);

}
