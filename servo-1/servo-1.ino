#include <Servo.h>

Servo servo1; //servo1
Servo servo2; //servo2

void setup() {
servo1.attach(2); //D4
servo2.attach(4); //D2

//Servo 1 
servo1.write(0);
delay(2000);
}

void loop() {
servo1.write(90);
delay(1000);

//servo2.write(0); //servo2

//delay(2000);

servo1.write(0);
//servo2.write(90); //servo2

delay(1000);

}

//servo2.write(0); //servo2
