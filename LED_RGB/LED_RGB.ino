
/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO:O sensor reage na presença de um campo magnético.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 */



int red_light_pin= 11; // ira definir a cor vermelha no pino 11 da placa arduino

int green_light_pin = 10; // ira definir a cor verde para o pino 10 da placa arduino

int blue_light_pin = 9; // ira definir a cor azul para o pino 9 da placa arduino

void setup() {

 pinMode(red_light_pin, OUTPUT);

 pinMode(green_light_pin, OUTPUT);

 pinMode(blue_light_pin, OUTPUT);

}

void loop() {

 RGB_color(255, 0, 0); // cor vermelho

 delay(1000);

 RGB_color(0, 255, 0); // cor verde

 delay(1000);

 RGB_color(0, 0, 255); // cor azul

 delay(1000);

 RGB_color(255, 255, 125); // Raspberry

 delay(1000);

 RGB_color(0, 255, 255); // cor ciano

 delay(1000);
 RGB_color(255, 0, 255); // cor magneta

 delay(1000);

 RGB_color(255, 255, 0); // cor amarelo

 delay(1000);

 RGB_color(255, 255, 255); // cor branca

 delay(1000);

}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)

{

 analogWrite(red_light_pin, red_light_value);

 analogWrite(green_light_pin, green_light_value);

 analogWrite(blue_light_pin, blue_light_value);

}
