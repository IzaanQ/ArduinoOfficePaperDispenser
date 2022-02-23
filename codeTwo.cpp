//Izaan Qaiser
//11.11.20
//TEJ201-01
//Office Paper Dispenser, RGB indicator code
//The Office Paper Dispenser is an established paper
//source that can hand you pieces of paper at the 
//speed and time of you choosing. The RGB indicator code 
//uses an ultrasonic sensor and an RGB led to show how much
//paper is in the paper tray.
#define trigpin 4 
#define echopin 3
#define R 5
#define G 6
void setup()
{
   pinMode(trigpin,OUTPUT);
   pinMode(echopin,INPUT);
   pinMode(G,OUTPUT);
   pinMode(R,OUTPUT);
}
void loop() {
  int duration, distance;
  digitalWrite(trigpin,HIGH);
  _delay_ms(100);
  digitalWrite(trigpin, LOW);
  duration=pulseIn(echopin,HIGH); 
  distance=(duration/2)/29.1; 
  
  if(distance > 0 & distance < 5){
    digitalWrite(R,LOW);
     _delay_ms(50);
    digitalWrite(G,HIGH);
  _delay_ms(50);
}
  else if(distance > 20 & distance < 80){
        digitalWrite(G,LOW);
         _delay_ms(50);
    digitalWrite(R,HIGH);
}
       else if(distance > 80 & distance < 120 )
        digitalWrite(R,LOW);
         _delay_ms(500);
}



