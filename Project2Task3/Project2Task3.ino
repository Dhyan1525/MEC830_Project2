#include <Stepper.h>
Stepper steppermotor1 = Stepper(2048, 13, 11, 12, 10);
Stepper steppermotor2 = Stepper(2048, 5, 3, 4, 2);

void setup() {  
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(8, INPUT);
   steppermotor1.setSpeed(20);
 steppermotor2.setSpeed(20); 
}

void loop() {
  long x, y;
  digitalWrite(9, LOW);
  delayMicroseconds(5);
  digitalWrite(9, HIGH);
  delayMicroseconds(5);
  digitalWrite(9, LOW);
  x = pulseIn(8, HIGH);
  y = (x/2) / 29.1; 
 
 if(y>10){
     steppermotor1.step(-1);
     steppermotor2.step(1);
     steppermotor1.step(-1);
     steppermotor2.step(1);
     steppermotor1.step(-1);
     steppermotor2.step(1);
 }
  
if(y<10){
 for (int lt = 0; lt <= 1200; lt++) {
      steppermotor1.step(1);
      steppermotor2.step(1);
      }

 for (int fd = 0; fd <= 1200; fd++) {
      steppermotor1.step(-1);
      steppermotor2.step(1);
      }
      
 for (int rt = 0; rt <= 1200; rt++) {
      steppermotor1.step(-1);
      steppermotor2.step(-1);
      }  
      
  for (int fd = 0; fd <= 1200; fd++) {
      steppermotor1.step(-1);
      steppermotor2.step(1);
      }
  for (int rt = 0; rt <= 1200; rt++) {
      steppermotor1.step(-1);
      steppermotor2.step(-1);
      }  
      
  for (int fd = 0; fd <= 1200; fd++) {
      steppermotor1.step(-1);
      steppermotor2.step(1);
      }
  for (int lt = 0; lt <= 1200; lt++) {
      steppermotor1.step(1);
      steppermotor2.step(1);
      }

 for (int fd = 0; fd <= 1200; fd++) {
      steppermotor1.step(-1);
      steppermotor2.step(1);
      } 
 delay(100000);
}

}
