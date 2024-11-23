#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;

const int servoPin1 = 5; //servo coin avant droit
const int servoPin2 = 7; //servo coin avant gauche
const int servoPin3 = 10; //servo coin arrière droit
const int servoPin4 = 9; //servo coin arrière gauche
const int servoPin5 = 4; //servo ex avant droit
const int servoPin6 = 6; //servo ex avant gauche
const int servoPin7 = 11; //servo ex arrière droit
const int servoPin8 = 8; //servo ex arrière gauche

void setup() {
  servo1.attach(servoPin1); //ne pas retirer de setup
  servo2.attach(servoPin2); // "  "     "     "   "
  servo3.attach(servoPin3); // "  "     "     "   "
  servo4.attach(servoPin4); // "  "     "     "   "
  servo5.attach(servoPin5); // "  "     "     "   "
  servo6.attach(servoPin6); // "  "     "     "   "
  servo7.attach(servoPin7); // "  "     "     "   "
  servo8.attach(servoPin8); //ne pas retirer de setup
  servo1.write(90);
  delay(500);
  servo2.write(90);
  delay(500);
  servo3.write(90);
  delay(500);
  servo4.write(90);
  delay(500);
  servo5.write(90);
  delay(500);
  servo6.write(90);
  delay(500);
  servo7.write(90);
  delay(500);
  servo8.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:

}
