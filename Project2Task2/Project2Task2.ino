#include <Stepper.h>
Stepper steppermotor1 = Stepper(2048, 13, 11, 12, 10);
Stepper steppermotor2 = Stepper(2048, 5, 3, 4, 2);

void setup(){
 steppermotor1.setSpeed(20);
 steppermotor2.setSpeed(20); 
}

void loop(){
  delay(5000);
fd1();
      delay(1000);
rt();
      delay(500);
fd1();
      delay(1000);
lt();
      delay(500);
fd2();
 delay(100000);  
}

void fd1() {
 for (int fd = 0; fd <= 12990; fd++) {
      steppermotor1.step(-1);
      steppermotor2.step(1);
      }
}

void fd2() {
 for (int fd = 0; fd <= 13800; fd++) {
      steppermotor1.step(-1);
      steppermotor2.step(1);
      }
}

void rt(){
 for (int rt = 0; rt <= 1145; rt++) {
      steppermotor1.step(-1);
      steppermotor2.step(-1);
      }
}

void lt(){
   for (int lt = 0; lt <= 1223; lt++) {
      steppermotor1.step(1);
      steppermotor2.step(1);
      }
}
