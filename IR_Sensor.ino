int IR = 3; // connect ir sensor to arduino pin 3
int LED = 4; // conect Led to arduino pin 4
 
void setup() 
{
  pinMode (IR, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
  Serial.begin (9600); // Starts the serial communication
}
 
void loop()
{
  //Define a variables for read the IRsensor   
  int Sensordata = digitalRead (IR); 
  
  // Prints the output data on the Serial Monitor 
  Serial.print("Sensor value:");
  Serial.println(Sensordata);
  
  if (Sensordata == 0)  //Check the sensor output
  {
    digitalWrite(LED, HIGH); // LED High
    }
  
  else 
  {
    digitalWrite(LED, LOW); // LED LOW
  }  
}
