/* 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/6/2015
 * 
 * This is an introductory program it will Blink an LED connected to the Arduino 
 */  

// Constants
const int redLED = 10;          // red LED on pin 10
const int buttonPin = 7;        // button connected to pin 7

void setup() {                        // start setup, this code runs once at startup
  pinMode(redLED, OUTPUT);            // initialize digital pin "redLED" as an output so you can turn the LED on and off
  pinMode(buttonPin, INPUT);   // initialize buttonPin as an input and turn on the arduino's internal pull-up resistor on buttonPin 
}                                     // end setup 

void loop() {                         // start main loop  
  if (digitalRead(buttonPin) == HIGH){  // this is called a conditional statement. if the true/false condition inside the () is true the code in the {} will execute, if not it will be skipped
    digitalWrite(redLED, LOW);        // turn the LED off by making the voltage LOW
  }                                   // end if
  else{ 
    digitalWrite(redLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
}                                     // end main method, repeat to top
