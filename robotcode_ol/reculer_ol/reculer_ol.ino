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
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  servo7.write(90);
  servo8.write(90);

    for (int i = 0; i < 5; i++) {
    servo5.write(135);//1
    servo8.write(135);//1
    delay(1000);
    servo1.write(45);//2
    servo4.write(135);//2
    delay(1000);
    servo5.write(90);//3
    servo8.write(90);//3
    delay(1000);
    servo6.write(135);//4
    servo7.write(135);//4
    delay(1000);
    servo2.write(135);//5
    servo3.write(45);//5
    delay(1000);
    servo6.write(90);//6
    servo7.write(90);//6
    delay(1000);
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    delay(1000);
  }
}

void loop() {

}
