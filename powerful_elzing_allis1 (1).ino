#include <Servo.h>
Servo servo1;
Servo servo2;
const int potPin=A0;
const int greenledPin= 12;
const int redledPin=13;

void setup(){
  servo1.attach(-10);
  servo2.attach(-9);
  pinMode(greenledPin,OUTPUT);
  pinMode(redledPin,OUTPUT);
}
void loop(){
  int potVal=analogRead(potPin);
  int angle1= map(potVal,0,1023, 0,180);
  int angle2= map(potVal,0, 1023, 180,0);
  servo2.write(angle1);
  servo2.write(angle2);
  if(potVal<513){
    digitalWrite(greenledPin, HIGH);
    digitalWrite(redledPin, LOW);
  }else{
    digitalWrite(greenledPin,LOW);
    digitalWrite(redledPin,HIGH);
  }
  delay(6);
}
    
  