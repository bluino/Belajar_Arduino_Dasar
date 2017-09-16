/* Bluino Starter Shield
   Latihan 05 Push Button

   Use pushbuttons for digital input.

   Version 1.0 9/2017 MK
*/

const int button1Pin = 2;  // pushbutton 1 pin
const int button2Pin = 4;  // pushbutton 2 pin
const int ledPin =  13;    // LED pin

int button1State, button2State;  // variables to hold the pushbutton states


void setup() {
  // Set up the pushbutton pins to be an input with the internal pull-up resistor enabled :
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT); // Set up the LED pin to be an output

}

void loop() {
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  // if button1 or button 2 are pressed (but not both)
  if (((button1State == LOW) && (button2State == HIGH)) || ((button1State == HIGH) && (button2State == LOW))) {
    digitalWrite(ledPin, HIGH);  // turn the LED on
  }
  else {
    digitalWrite(ledPin, LOW);  // turn the LED off
  }
}