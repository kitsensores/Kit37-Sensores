/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: dispositivo eletrônico produzido com a finalidade de detectar toques ou batidas sobre ele.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
https://blogmasterwalkershop.com.br/arduino/como-usar-com-arduino-modulo-sensor-detector-de-toque-batida-ky-031

 */


const int pinoSensor = 8; //PINO DIGITAL UTILIZADO PELO SENSOR

void setup() {
  Serial.begin(9600); //INICIALIZA A SERIAL
  pinMode(pinoSensor, INPUT); //DEFINE O PINO COMO ENTRADA
}

void loop() {
  if (digitalRead(pinoSensor) == LOW) { //SE A LEITURA DO PINO FOR IGUAL A LOW, FAZ
    Serial.println("Batida detectada"); //IMPRIME O TEXTO NA SERIAL
  }
}
