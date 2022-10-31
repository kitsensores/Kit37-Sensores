int shockSensorPin = 2;

int greenLedPin = 3;

int redLedPin = 4;

bool shockSensorSate = 0;

void setup() {

pinMode(shockSensorPin,INPUT);

pinMode(greenLedPin,OUTPUT);

pinMode(redLedPin,OUTPUT);

shockSensorSate = digitalRead(shockSensorPin);

}

void loop() { 

 if (shockSensorSate == 1){

     digitalWrite(greenLedPin,LOW);  

     for ( int i=0; i < 10;i++){      

     digitalWrite(redLedPin,HIGH);

     delay(150);

     digitalWrite(redLedPin,LOW);

     delay(150);

     if ( i == 9){

       shockSensorSate = 0;

     }

     }

   }

   else {

     shockSensorSate = digitalRead(shockSensorPin);

     digitalWrite(greenLedPin,HIGH);

   }

}
