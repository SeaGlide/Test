/* 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/5/2015
 * 
 * This program reads the value from a potentiometer and fades an LED dimmer or brighter   
 * and print the input value, and output value to the console
 */  

#include <Servo.h>             // import the servo library, this allows us to use a bunch of additional code to make it really easy to control a servo
Servo myServo;                 // create "Servo" object called "myServo" to control a servo

// Constants
const int redLED = 6;          // red LED on pin 10
const int servoPin = 5;         // servo attached to pin 5
int sensorPin = A0;             // sensor attached to pin A0 (analog input #0)

// Variables 
int sensorValue = 0;            // variable used to store the value coming from the sensor: 0-1023
int fadeValue = 0;              // variable used to store the value used to fade the LED:   0- 255

void setup() {                  // start setup, this code runs once at startup
  pinMode(redLED, OUTPUT);      // set redLED as an output
  Serial.begin(9600);           // startup the serial port at 9600 bits per seccond (baud)
  myServo.attach(servoPin);           // attaches the servo on pin "servoPin" to the servo object. servo must be attached to send it a command. 
                                      //   When a servo is attached it is continually driven to whatever position it was last commanded to drive to
}                               // end setup

void loop() {                           // start main loop 
  sensorValue = analogRead(sensorPin);  // read the value of the potentiometer and store in "sensorValue" between 0 & 1023
  fadeValue = map(sensorValue, 0, 1023, 0, 255);    // map the sensorValue down from 0-1023 to 0-255
  analogWrite(redLED, fadeValue);       // use the "analogWrite" method to fade the redLED 
  myServo.write(map(sensorValue, 0 , 1023, 0, 180));
  /* add code here to:
   *                  map sensorValue to 0-180
   *                  drive the servo to this angle
   *                  whatever else you would like to do 
   */
  printValues();                        // run the "printValues" Method, see below
}                                       // end main loop, repeat to top

void printValues(){                     // this is a method, it is a block of code that you can call with a single line: printValues(); 
  Serial.print("Sensor Value: ");       // print "Sensor Value: " to the Serial console
  Serial.print(sensorValue);            // print the sensorValue (0-1023)
  Serial.print(" Output Value: ");      // print " Output Value: "
  Serial.println(fadeValue);              // print the fadeValue (0-255)

  // add print statements here to print the angle that the servo is commanded to drive to
  
}

