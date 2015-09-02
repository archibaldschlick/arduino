
const int keyPin = 9; //Button an Pin 9
const int ledPinGREEN = 10; //grüne LED an Pin 10
const int ledPinRED = 11; //rote LED an Pin 11

void setup() {
 {
  pinMode(keyPin, INPUT); //Input durch Button
  pinMode(ledPinRED, OUTPUT); //Output an rote LED
  pinMode(ledPinGREEN, OUTPUT); //Output an grüne LED
 }

}

void loop() {
  if(digitalRead(keyPin) ==HIGH) //Button gedrückt
  {
    digitalWrite(ledPinGREEN,HIGH); //Grüne LED leuchtet
    digitalWrite(ledPinRED, LOW); //Rote LED aus
  }
  else
  {
    digitalWrite(ledPinRED,HIGH); //Rote LED leuchtet
    digitalWrite(ledPinGREEN, LOW); //Grüne LED aus
  }
}
