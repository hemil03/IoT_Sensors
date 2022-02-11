#include ‹Wire.h> 
#include <LIDARLite.h>

LIDARLite lidar; 
int cnt = 0; 

void setup() 
{
  Serial.begin(9600); // Initialize serial connection to display distance readings 
  lidar.begin(0, true); // Set configuration to default and 120 to 400 kHz 
  lidar.configure(0); // I2c communication(1 for PWH)
}

void loop() 
{
  Int dist; 
  if(cnt = 0)  
  {
    dist = lidar.distance(); // With bias correction  
  }
  else 
  {
    dist= lider.distance (false) ; // Without bias correction 
  }
  cnt++; // Increment reading counter 
  cnt = cnt % 100; 
  Serial.print(dist); // Display distance 
  Serial.println("cm"); 
  delay(10); //Delay for 10ms 
}
