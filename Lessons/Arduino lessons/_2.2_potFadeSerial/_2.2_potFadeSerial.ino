/* 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/5/2015
 * 
 * This program reads the value from a potentiometer and fades an LED dimmer or brighter   
 * and print the input value (sensorValue) to the console 
 */  

// Constants
const int redLED = 10;          // red LED on pin 10
const int sensorPin = A0;             // sensor attached to pin A0 (analog input #0)

// Variables 
int sensorValue = 0;            // variable used to store the value coming from the sensor: 0-1023
int outputValue = 0;            // variable used to store the brightness value of the LED

void setup() {                  // start setup, this code runs once at startup
  pinMode(redLED, OUTPUT);      // set redLED as an output
  Serial.begin(9600);           // startup the serial port at 9600 bits per seccond (baud)
}                               // end setup

void loop() {                           // start main loop 
  sensorValue = analogRead(sensorPin);  // read the value of the potentiometer and store in "sensorValue" between 0 & 1023
  outputValue = map(sensorValue, 0, 1023, 0, 255);    // map the sensorValue down from 0-1023 to 0-255
  analogWrite(redLED, outputValue);       // use the "analogWrite" method to fade the redLED 
  Serial.println(sensorValue);          // print the sensorValue (0-1023) to the serial console
  delay(500);
}                                       // end main loop, repeat to top


