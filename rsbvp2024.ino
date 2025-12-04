#include<Servo.h>
Servo s;

int ms=2;//moisture sensor goes to 2 pin 

int ir=4;//connect  ir sensor digital pin to 4 
int buzzer=5;//connect buzzer to pin 5

void setup() {
  
s.attach(9); //connect your servo motor to 9th pin 
pinMode(ms,INPUT);

pinMode(ir,INPUT);
pinMode(buzzer,OUTPUT);


}
void loop() {
a=digitalRead(ir);
  if (a==0){  
  if(ms==0){
     digitalWrite(buzzer,HIGH);
     s.write(90);//you can adjust the angle of motor here
     }
     }
   else{
      digitalWrite(buzzer,HIGH);
     s.write(180);//you can adjust the angle of motor here
      } 
  }
}
//so i have made changes from ultrasonic sensor to ir sensor  still some debugging has to be done like you have to keep the correct sensitivity of both ir sensor and moisture sensor if possible conect rain sensor instead of moisture sensor and put the exact values of output in 'if' statement and the exact angle of servo motor ;