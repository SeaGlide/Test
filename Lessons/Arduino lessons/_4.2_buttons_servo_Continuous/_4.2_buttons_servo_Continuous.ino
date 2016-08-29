/* 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/6/2015
 * 
 * This program moves a servo to two different positions  
 * 
 * Challange: use button two to 5 degrees when pressed  ----------
 */  

#include <Servo.h>             // import the servo library, this allows us to use a bunch of additional code to make it really easy to control a servo
Servo myServo;                 // create "Servo" object called "myServo" to control a servo

// Constants
const int redLED = 10;          // red LED on pin 10
const int buttonPin = 7;        // button connected to pin 7
const int buttonPin2 = 8;       // button connected to pin 8
const int servoPin = 5;         // servo attached to pin 5

void setup() {                        // start setup, this code runs once at startup
  pinMode(redLED, OUTPUT);            // initialize digital pin "redLED" as an output so you can turn the LED on and off
  pinMode(buttonPin, INPUT_PULLUP);   // initialize buttonPin as an input and turn on the arduino's internal pull-up resistor on buttonPin 
  pinMode(buttonPin2, INPUT_PULLUP);  // initialize buttonPin as an input and turn on the arduino's internal pull-up resistor on buttonPin 
}                                     // end setup 

void loop() {                             // start main loop  
  if (digitalRead(buttonPin) == false){   // this is called a conditional statement. if the true/false condition inside the () is true the code in the {} will execute, if not it will be skipped
    myServo.attach(servoPin);             // attaches the servo on pin "servoPin" to the servo object. servo must be attached to send it a command. 
    myServo.write(180);                   // drive the servo to 175 deg
    delay(50);                            // a .05 seccond delay to smooth things out, reduces jitter 
  }                                       // end if
  if (digitalRead(buttonPin2) == false){  // this is called a conditional statement. if the true/false condition inside the () is true the code in the {} will execute, if not it will be skipped
    myServo.attach(servoPin);             // attaches the servo on pin "servoPin" to the servo object. servo must be attached to send it a command. 
    myServo.write(0);                     // drive the servo to 5 deg
    delay(50);                            // a .05 seccond delay to smooth things out, reduces jitter 
  }                                       // end if
  myServo.detach();                       // attaches the servo on pin "servoPin" to the servo object. servo must be attached to send it a command. 
}                                         // end main method, repeat to top


