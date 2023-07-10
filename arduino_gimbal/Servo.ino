#include <Servo.h> 
Servo servo0; 
Servo servo1;
Servo servo2;
int position = 0; 
const int waitTime = 5; 
 
void setup() 
{ 
  // Servo an digiteln Port D4 
  servo0.attach(12);
  servo1.attach(13);
  servo2.attach(14);

   
} 
 
void loop() 
{ 
  // Servo um 180 Grad drehen 
  for (position = 0; position < 180; position++) 
  { 
    servo0.write(position); 
    servo1.write(position); 
    servo2.write(position); 
    delay(waitTime); 
  } 
 
  // Servo wieder zurückdrehen 
  for (position = 180; position >= 1; position--) 
  { 
    servo0.write(position); 
    servo1.write(position); 
    servo2.write(position); 
    delay(waitTime); 
  } 
}