/*
 * Interface InfraRed Sensor Using NodeMCU
 * By NodeMCU
 * 
*/
int ledPin = 12; // D6:  choose pin for the LED
int inputPin = 13; // D7: choose input pin (for Infrared sensor) 
int val = 0; // variable for reading the pin status 
int motor = 2; //dc motor L293D input

//Servo myservo1; // create servo object to control a servo // twelve servo objects can be created on most boards

void setup() 
{ 
   pinMode(ledPin, OUTPUT); // declare LED as output 
   pinMode(inputPin, INPUT); // declare Infrared sensor as input
   pinMode (motor, OUTPUT);  //declare Motor output 
   //myservo1.attach(2); // D4:

} 
void loop()
{ 
   val = digitalRead(inputPin); // read input value 
   if (val == HIGH)
   { // check if the input is HIGH
      digitalWrite(ledPin, LOW); // turn LED OFF  
      digitalWrite(motor, LOW); // turn motor off
     // myservo1.write(180); // tell servo to go to position in variable 'pos'
      delay(100); // waits 15ms for the servo to reach the position
      //delay(200); 
  //delay(timeOn);
   } 
   else 
   { 
      digitalWrite(ledPin, HIGH); // turn LED ON 
      digitalWrite(motor, HIGH); // turn motor ON
      delay(2000);
      digitalWrite(motor, LOW); // turn motor ON

     // myservo1.write(0); // tell servo to go to position in variable 'pos'
       // waits 15ms for the servo to reach the position
   } 
}
