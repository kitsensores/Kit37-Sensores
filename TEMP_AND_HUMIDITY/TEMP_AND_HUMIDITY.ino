
/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor que irá medir a temperatura e a umidade do local onde o sensor está.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 */

#include "DHT.h"

#define DHTPIN 2     // Digital pin connected to the DHT sensor

#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHTxx test!"));

  dht.begin();
}

void loop() {
  // Aguarde alguns segundos entre as medições.
  delay(2000);

 // A leitura de temperatura ou umidade leva cerca de 250 milissegundos!
  // As leituras do sensor também podem ter até 2 segundos de 'antiga'
  float h = dht.readHumidity();
 // Lê a temperatura como Celsius (o padrão)
  float t = dht.readTemperature();

  
  // Lê a temperatura como Fahrenheit 
  float f = dht.readTemperature(true);

  // Verifica se alguma leitura falhou e sai mais cedo.
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

 
  float hif = dht.computeHeatIndex(f, h);
  
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F(" Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(f);
  Serial.print(F("°F  Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));
}
