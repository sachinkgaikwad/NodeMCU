/*
 * Interface InfraRed Sensor Using NodeMCU
 * By TheCircuit
 * Red :     5V
 * Brown: Sensor output
 * Black : Ground
*/
#include<Servo.h>

int ledPin = 12; // D6:  choose pin for the LED
int inputPin = 13; // D7: choose input pin (for Infrared sensor) 
int val = 0; // variable for reading the pin status 

int frequency=1000; //Specified in Hz
const int buzzer = 4; 
//int timeOn=1000; //specified in milliseconds
//int timeOff=1000; //specified in millisecods

Servo myservo1; // create servo object to control a servo // twelve servo objects can be created on most boards

void setup() 
{ 
   pinMode(ledPin, OUTPUT); // declare LED as output 
   pinMode(inputPin, INPUT); // declare Infrared sensor as input
   myservo1.attach(2); // D4:
   pinMode(buzzer, OUTPUT);

} 
void loop()
{ 
   val = digitalRead(inputPin); // read input value 
   if (val == HIGH)
   { // check if the input is HIGH
      digitalWrite(ledPin, LOW); // turn LED OFF  
      myservo1.write(180); // tell servo to go to position in variable 'pos'
      delay(100); // waits 15ms for the servo to reach the position
      analogWrite(buzzer, 20);
      delay(200);
      digitalWrite(buzzer, LOW);
      delay(200); 
  //delay(timeOn);
   } 
   else 
   { 
      digitalWrite(ledPin, HIGH); // turn LED ON 
      
      myservo1.write(0); // tell servo to go to position in variable 'pos'
      delay(15); // waits 15ms for the servo to reach the position
   } 
}
