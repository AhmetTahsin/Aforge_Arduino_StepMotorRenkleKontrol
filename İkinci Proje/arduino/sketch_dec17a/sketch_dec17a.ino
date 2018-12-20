#include <Servo.h>
Servo sg90;

void setup() {
  sg90.attach(12);
  Serial.begin(9600);
  int a=0;

}

void loop() 
{
  while(1)
  {
    char a = Serial.read();
    if(a=='a')
    { 
      sg90.write(90);
      
    }
    else if(a=='b')
    {
      sg90.write(-90);
      
    }
    else
    {
    
    }    
  } 
}
