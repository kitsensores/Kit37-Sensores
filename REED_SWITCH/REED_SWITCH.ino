/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor que reage através da presença de um campo eletromagnético(imã)
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://autocorerobotica.blog.br/aprendendo-a-utilizar-o-reed-switch/
 */


int Pino_Led    = 12 ;                // Pino de ligação do Led no Arduino
int Pino_Sensor =  2 ;                // Pino de ligação do sensor no Arduino
int estado_sensor;                    // Variavel para armazenar o estado do sensor
                                      // ACIONADO = HIGH || DESATIVADO = LOW

void setup ()
{
  // Definando o modo de operação do Sensor = INPUT e o Led = OUTPUT
  pinMode (Pino_Led,    OUTPUT);                               
  pinMode (Pino_Sensor,  INPUT);
}

void loop ()
{
  estado_sensor = digitalRead (Pino_Sensor);    // Lendo o estado do sensor
  
  // Caso o sensor for ativado = HIGH, faça o que está dentro do comando If.
  if (estado_sensor == HIGH)                                
  {
    digitalWrite (Pino_Led, HIGH);
  }

  // Caso o sensor não seja ativado = LOW, execute o que está dentro do bloco else
  else
  {
    digitalWrite (Pino_Led, LOW);     
  }

}
