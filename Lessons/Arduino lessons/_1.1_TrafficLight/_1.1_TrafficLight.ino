/* 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/5/2015
 * 
 * This program simulates a traffic light with three leds: red, green, and yellow.  
 */  

// Declare constants and variables for your program here --V
const int redLED = 10;          // red LED on pin 10
const int greenLED = 11;        // green LED on pin 11
const int yellowLED = 12;       // yellow LED on pin 12

void setup() {                  // the code inside this setup method will run once when the arduino starts up
  pinMode(redLED, OUTPUT);      // set redLED as an output
  pinMode(greenLED, OUTPUT);    // set greenLED as an output
  pinMode(yellowLED, OUTPUT);   // set yellowLED as an output

}                               // end setup

void loop() {                       // this is the main method, the code inside here { will run over and over till the arduino is switched off} 
  digitalWrite(greenLED, HIGH);       // turn off the red light                            |
  delay(3000);                      // wait 3 secconds                                   |
  digitalWrite(greenLED, LOW);        // turn off the red light                            |
  digitalWrite(yellowLED, HIGH);    // turn on the yellow light                          |
  delay(1000);                      // wait for 1 second                                 |
  digitalWrite(yellowLED, LOW);     // turn off the yellow light                         |
  digitalWrite(redLED, HIGH);     // turn the LED on (HIGH is the voltage level)  <----
  delay(4000);                      // wait for 4 seconds                                |
  digitalWrite(redLED, LOW);      // turn the LED off by making the voltage LOW        |
}                                   // end main method, repeat to top -------------------


