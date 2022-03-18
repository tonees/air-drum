/* Author: Antonio Conzo
*  AirDrum 2015
* 
*/

int flagKick;
int flagSnare;
int flagHit;  
int HitHat = A1;
int Snare = A4;
int Kick = A3;
int PedHit = A0;

void setup() {
  Serial.begin(31250);  
}

void loop() { 
// Pedale Hit Hat Aperto
  if(analogRead(PedHit)>100)
    if(analogRead(HitHat)>600 && analogRead(HitHat)<700){
      noteOn(9, 46, 120);
       delay(70);
       //flagHit=0;
    }

     
//Pedale Hit Hat Chiuso
  if(analogRead(PedHit)<100)
    if(analogRead(HitHat)>600 && analogRead(HitHat)<700){
      noteOn(9, 42, 120);
      delay(70);
   }
     
//Rullante

  if(analogRead(Snare)>600 && analogRead(Snare)<700){
    noteOn(9, 38, 120);
    delay(70);
   }
   
//Grancassa
  if(analogRead(Kick)>600){
    noteOn(9, 35, 120);
    delay(70);
  }   
  
 }

  
