#include <Servo.h>
#define servoPin 5   // Create a variable to store the servo position:
Servo myservo;   // Define the servo pin:

int angle = 0;
void setup() 
{
  myservo.attach(servoPin);
}
void loop() 
{
  myservo.write(90);
  delay(1000);
  myservo.write(180);
  delay(1000);
  myservo.write(0);
  delay(1000);

  for(angle = 0; angle <= 180; angle += 1)  // Sweep from 0 to 180 degrees:
  {
    myservo.write(angle);
    delay(15);
  }
  
  for(angle = 180; angle >= 0; angle -= 1)  // And back from 180 to 0 degrees:
  {
    myservo.write(angle);
    delay(30);
  }
  delay(1000);
}
