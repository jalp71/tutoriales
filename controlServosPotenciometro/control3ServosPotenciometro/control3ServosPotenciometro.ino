#include<Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
int pot1,pot2,pot3;
int val1,val2,val3;
void setup(){
 servo1.attach(9);
servo2.attach(10);
servo3.attach(11);
}
void loop(){
 pot1=analogRead(A0); 
 val1=map(pot1,0,1023,0,180);
 servo1.write(val1);
  pot2=analogRead(A1); 
 val2=map(pot2,0,1023,0,180);
 servo2.write(val2);
  pot3=analogRead(A2); 
 val3=map(pot3,0,1023,0,180);
 servo3.write(val3);
}
