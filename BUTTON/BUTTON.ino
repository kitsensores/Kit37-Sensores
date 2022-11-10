/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: componentes eletrônicos mais utilizados para prototipagem de projetos. Esta chave é um tipo de interruptor pulsador (conduz somente quando está pressionado) 
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://create.arduino.cc/projecthub/WellTronic/ky-004-button-module-ca1d5b
 */


int  botãoPino  =  4 ;
int  ledPin  =  3 ;

bool  buttonState  =  false ;

void  configuração ()  {
pinMode ( buttonPin , INPUT );
pinMode ( ledPin , OUTPUT );

}
void  loop ()  {
  
buttonState  =  digitalRead ( buttonPin );

 if  (  buttonState  ==  true ){
  digitalWrite ( ledPin ,  HIGH );
 }
senão  {
  digitalWrite ( ledPin ,  LOW );
}


}
