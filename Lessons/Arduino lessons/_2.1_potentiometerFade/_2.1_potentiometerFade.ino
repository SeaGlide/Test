/* 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/5/2015
 * 
 * This program reads the value from a potentiometer and blinks an LED faster or slower  
 */  

// Constants
const int redLED = 10;          // red LED on pin 10
const int sensorPin = A0;             // sensor attached to pin A0 (analog input #0)

// Variables 
int sensorValue = 0;            // variable used to store the value coming from the sensor
int outputValue = 0;            // variable to store the brightness value for the LED

void setup() {                  // start setup, this code runs once at startup
  pinMode(redLED, OUTPUT);      // set redLED as an output
}                               // end setup

void loop() {                           // start main loop 
  sensorValue = analogRead(sensorPin);  // read the value of the potentiometer and store in "sensorValue" between 0 & 1023
  outputValue = map(sensorValue, 0, 1023, 0, 255);  // map the sensor value from 0-1023 range to 0-255 range
  analogWrite(redLED, outputValue);     // turn the LED on (HIGH is the voltage level)              
}

