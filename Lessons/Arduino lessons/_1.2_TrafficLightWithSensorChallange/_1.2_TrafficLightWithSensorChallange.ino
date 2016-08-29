/* 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/5/2015
 * 
 * This program simulates a traffic light with three leds: red, green, and yellow.  
 * 
 * CHALLANGE: Make the traffic light behave like a light that is triggered by a car sensor
 *            light remains red until some time after the button is pressed then changes to green
 *            then back to yellow and red again, staying red until the button is pressed
 *                                                                                         Hint use a loop Help>Referance -> While [loop]
 */  

//Constants
const int redLED = 10;          // red LED on pin 10
const int greenLED = 11;        // green LED on pin 11
const int yellowLED = 12;       // yellow LED on pin 12
const int buttonPin = 13;       // button attached to pin 13

void setup() {                      // start setup
  pinMode(redLED, OUTPUT);          // set redLED as an output
  pinMode(greenLED, OUTPUT);        // set greenLED as an output
  pinMode(yellowLED, OUTPUT);       // set yellowLED as an output
  pinMode(buttonPin, INPUT_PULLUP); // set buttonPin as an input and set the pull-up resistor, inverted logic: when buttin is pressed value is LOW, when not pressed value is HIGH
}                                   // end setup

void loop() {                       // this is the main method, the code inside here { will run over and over till the arduino is switched off} 
  digitalWrite(greenLED, HIGH);     // turn the LED on (HIGH is the voltage level) 
  delay(4000);                      // wait for 4 seconds
  digitalWrite(greenLED, LOW);      // turn the LED off by making the voltage LOW
  digitalWrite(yellowLED, HIGH);    // turn on the yellow light
  delay(1000);                      // wait for 1 second
  digitalWrite(yellowLED, LOW);     // turn off the yellow light
  digitalWrite(redLED, HIGH);       // turn on the red light
  delay(3000);                      // wait 3 secconds
  digitalWrite(redLED, LOW);        // turn off the red light
}                                   // end main method, repeat to top

