#include <IRremote.h>

int IR_RECEIVE_PIN = 7;

void setup()
{
Serial.begin(9600);
IrReceiver.begin(IR_RECEIVE_PIN);
}

void loop()
{
if (IrReceiver.decode())
{
Serial.print("Code: ");
Serial.println(IrReceiver.decodedIRData.decodedRawData);
Serial.println(" ");
IrReceiver.resume();
}
}
