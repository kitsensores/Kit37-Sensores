/*
 INSTITUTO FEDERAL DE GOIAS - IFG CAMPUS GOIANIA 
 FUNÇÃO: sensor que irá medir seus batimentos cardíacos,  o sensor fornece é apenas um valor "analógico" de 0 a 1023, informando quanta luz infravermelha o sensor de luz recebe ou, na verdade, quanto algo está sombreando o sensor de luz.
 ESTAGIARIOS: RHAMON LUCAS V. COSTA e ISABELA R. DE OLIVEIRA
 DATA: 31/10/2022
 https://create.arduino.cc/projecthub/Johan_Ha/from-ky-039-to-heart-rate-0abfca 
 */

#define samp_siz 4
#define rise_threshold 5
// Pulse Monitor Test Script
int sensorPin = 0;
void setup() {
   Serial.begin(9600);
}
void loop ()
{
   float reads[samp_siz], sum;
   long int now, ptr;
   float last, reader, start;
   float first, second, third, before, print_value;
   bool rising;
   int rise_count;
   int n;
   long int last_beat;
   for (int i = 0; i < samp_siz; i++)
     reads[i] = 0;
   sum = 0;
   ptr = 0;
   while(1)
   {
     // calcula uma média do sensor
     // durante um período de 20 ms
     // o ruído de 50 Hz causado pela luz elétrica
     n = 0;
     start = millis();
     reader = 0.;
     do
     {
       reader += analogRead (sensorPin);
       n++;
       now = millis();
     }
     while (now < start + 20);  
     reader /= n;
     // we got an average
     // Add the newest measurement to an array
     // and subtract the oldest measurement from the array
     // to maintain a sum of last measurements
     sum -= reads[ptr];
     sum += reader;
     reads[ptr] = reader;
     last = sum / samp_siz;
     // now last holds the average of the values in the array
     // check for a rising curve (= a heart beat)
     if (last > before)
     {
       rise_count++;
       if (!rising && rise_count > rise_threshold)
       {
         // Ok, we have detected a rising curve, which implies a heartbeat.
         // Record the time since last beat, keep track of the two previous
         // times (first, second, third) to get a weighed average.
         // The rising flag prevents us from detecting the same rise 
         // more than once.
         rising = true;
         first = millis() - last_beat;
         last_beat = millis();
         
         print_value = 60000. / (0.4 * first + 0.3 * second + 0.3 * third);
         Serial.print(print_value);
         Serial.print('\n');
         third = second;
         second = first;
       }
     }
     else
     {
       
       rising = false;
       rise_count = 0;
     }
     before = last;
     ptr++;
     ptr %= samp_siz;
   }
} 
