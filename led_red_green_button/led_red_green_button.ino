
/*
"led_red_green_button"
Deutsch: 
Durch den Druck auf den BUTTON/ Taster wechselt der Arduino zwischen der roten und der grünen LED.

English:
When you push the button the Arduino will switch between the red and green LED.

Arduino Uno
1x Breadboard ;)
1x LED Grün / green
1x LED Rot  / red
2x Widerstände 220 Ohm / resistors 220 Ohm
1x Widerstand 10k Ohm / resistor 10k Ohm
1x Taster / Button
8x Kabel / cables

*/
const int keyPin = 9; //Button an Pin 9 //initialize digital pin 9 as "keyPin" = button 
const int ledPinGREEN = 10; //grüne LED an Pin 10 //initialize digital pin 10 as "ledPinGreen"
const int ledPinRED = 11; //rote LED an Pin 11 //initialize digital pin 11 as "ledPinRED"

void setup() {
 {
  pinMode(keyPin, INPUT); //Input durch Button //initialize "keyPin" as an INPUT
  pinMode(ledPinRED, OUTPUT); //Output an rote LED //initialize "ledPinRED" as an OUTPUT  
  pinMode(ledPinGREEN, OUTPUT); //Output an grüne LED //initialize "ledPinGREEN" as an OUTPUT
 }

}

void loop() {
  if(digitalRead(keyPin) ==HIGH) //Button gedrückt //button pushed
  {
    digitalWrite(ledPinGREEN,HIGH); //Grüne LED leuchtet //green LED on
    digitalWrite(ledPinRED, LOW); //Rote LED aus //red LED off
  }
  else
  {
    digitalWrite(ledPinRED,HIGH); //Rote LED leuchtet //red LED on
    digitalWrite(ledPinGREEN, LOW); //Grüne LED aus //green LED off  
  }
}
