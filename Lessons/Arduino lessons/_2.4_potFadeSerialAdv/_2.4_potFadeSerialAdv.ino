/* 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/5/2015
 * 
 * This program reads the value from a potentiometer and fades an LED dimmer or brighter   
 * and print the input value, and output value to the console
 */  

// Constants
const int redLED = 10;          // red LED on pin 10
int sensorPin = A0;             // sensor attached to pin A0 (analog input #0)

// Variables 
int sensorValue = 0;            // variable used to store the value coming from the sensor: 0-1023
int outputValue = 0;              // variable used to store the value used to fade the LED:   0- 255

void setup() {                  // start setup, this code runs once at startup
  pinMode(redLED, OUTPUT);      // set redLED as an output
  Serial.begin(9600);           // startup the serial port at 9600 bits per seccond (baud)
}                               // end setup

void loop() {                           // start main loop 
  sensorValue = analogRead(sensorPin);  // read the value of the potentiometer and store in "sensorValue" between 0 & 1023
  outputValue = map(sensorValue, 0, 1023, 0, 255);    // map the sensorValue down from 0-1023 to 0-255
  analogWrite(redLED, outputValue);       // use the "analogWrite" method to fade the redLED 
  Serial.print("Sensor Value: ");        // print "Sensor Value: " to the Serial console
  Serial.print(sensorValue);            // print the sensorValue (0-1023)
  Serial.print(" Output Value: ");       // print " Output Value: "
  Serial.print(outputValue);              // print the fadeValue (0-255)
  Serial.println();                              // carrage return
}                                       // end main loop, repeat to top


