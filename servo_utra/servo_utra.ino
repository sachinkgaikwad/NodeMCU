
/*
 * Interface US Sensor Using NodeMCU ESP8266
 * By Sachinkgaikwad@gmail.com
 * Servo :
 * Red :     5V
 * Brown: Sensor output
 * Black : Ground
*/
//#include <Servo.h>

#include<Servo.h>
const int trigPin = 15;
const int echoPin = 13;
long duration;
int distance;
int safetyDistance;
Servo myservo1; // create servo object to control a servo // twelve servo objects can be created on most boards
Servo myservo2; 
int pos = 0; // variable to store the servo position
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
myservo1.attach(2);
myservo2.attach(4);Serial.begin(9600);
}

void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
safetyDistance = distance;
if (safetyDistance <= 5){
// goes from 0 degrees to 180 degrees // in steps of 1 degree
myservo1.write(90); // tell servo to go to position in variable 'pos'
delay(15); // waits 15ms for the servo to reach the position


myservo2.write(90); // tell servo to go to position in variable 'pos'
delay(15); // waits 15ms for the servo to reach the position
}
 

else{ // goes from 180 degrees to 0 degrees
myservo1.write(0); // tell servo to go to position in variable 'pos'
delay(15); // waits 15ms for the servo to reach the position }

myservo2.write(0); // tell servo2 to go to position in variable 'pos'
delay(15); // waits 15ms for the servo to reach the position

Serial.print("Distance: ");
Serial.println(distance);
}
}                                                                                                                                       
