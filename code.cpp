//Izaan Qaiser
//11.11.20
//TEJ201-01
//Office Paper Dispenser, stepper code
//The Office Paper Dispenser is an established paper
//source that can hand you pieces of paper at the 
//speed and time of you choosing. The stepper code
//shows the control and revolution of the stepper motor
//and its indicator light, controlled by a potentiometer.
#include <Stepper.h>
const int stepsPerRevolution = 200; 
int potPin= A5;  
int LEDPin= 3;
int readValue; 
int writeValue; 
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
void setup() {
  pinMode(potPin, INPUT);  
  pinMode(LEDPin, OUTPUT);
}
void loop() {
  int sensorReading = analogRead(A5);
  int motorSpeed = map(sensorReading, 0, 1023, 0, 100);
  if (motorSpeed > 0) {
    myStepper.setSpeed(motorSpeed);
    myStepper.step(stepsPerRevolution / 100);
  }
   readValue = analogRead(potPin);
 writeValue = (255./1023.) * readValue;
 analogWrite(LEDPin, writeValue);
}



