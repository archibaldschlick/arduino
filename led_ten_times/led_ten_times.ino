/*
  Blink
  Turns on an LED on for two seconds, then off for one second for ten times.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int repeat = 0;     // How many times should we loop before stopping? (0 for no stop)

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}


void loop() {
 if (repeat <=10) 
 { // Let the loop run for ten times. 
   repeat++;
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);               // wait for two seconds
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
 }
}
