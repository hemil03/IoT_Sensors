#include <Stepper.h>
const int stepsPerRevolution = 90;

Stepper myStepper(stepsPerRevolution, 4, 5, 6, 7);

void setup() 
{
   myStepper.setSpeed(5);  // set the speed at 60 rpm
   Serial.begin(9600);  
}

void loop() {
   Serial.println("clockwise");  // step one revolution in the one direction:
   myStepper.step(stepsPerRevolution);
   delay(500);
   
   Serial.println("counterclockwise");  // step one revolution in the other direction:
   myStepper.step(-stepsPerRevolution);
   delay(500);
}
