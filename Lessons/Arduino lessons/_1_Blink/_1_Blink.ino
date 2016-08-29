/*  <- start header
 *asoidfaosidufk 
 * This is the program header put things like the date, your name
 * And a description of what your program does here
 * 
 * Michal Britt-Crane 7/5/2015
 * 
 * This is an introductory program it will Blink an LED connected to the Arduino 
 * 
 * V<- end header
 */  

// This is a one-line comment

// Declare constants and variables for your program here --V
const int redLED = 13;          // create a new constant of type "intiger" called redLED asign the value = 10

void setup() {                  // The code inside this setup method will run once when the arduino starts up
  pinMode(redLED, OUTPUT);      // initialize digital pin "redLED" as an output so you can turn the LED on and off
}                               // the } marks the end of the setup loop closing the { which marks the begining 

void loop() {                   // This is the main method, the code inside here { will run over and over till the arduino is switched off} 
  digitalWrite(redLED, HIGH);   // turn the LED on (HIGH is the voltage level)  <----
  delay(100);                  // wait for 1 second (1000 milisecconds)             |
  digitalWrite(redLED, LOW);    // turn the LED off by making the voltage LOW        |
  delay(100);                  // wait for 1 second                                 |
}                               // end main method, repeat to top -------------------


