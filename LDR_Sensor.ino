int LDR = A5;
int LED1 = 5;
int LED2 = 4;
 
void setup()
{
  pinMode (LDR, INPUT);
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  Serial.begin (9600);
}
 
void loop()
{
   int Sensordata = analogRead (LDR);
 
   Serial.print("Sensor value:");
   Serial.println(Sensordata);
 
 if (Sensordata <= 300)
  {
   digitalWrite(LED1, HIGH);
   digitalWrite(LED2, LOW);
  }
 
 else if (Sensordata >= 800)
  {
   digitalWrite(LED1, LOW);
   digitalWrite(LED2, HIGH);
  }
}
