/* Bluino Starter Shield
   Latihan 11 7-segment

   To display number counter-up 0 - 9999 on sevent segment.

   Version 1.0 9/2017 MK
*/


#include <DigitShield.h>

int counter = 0;

// Create a Digit Shield connected to Arduino pins 5,6,7,8.
DigitShieldClass digitShield(5, 6, 7, 8);

void setup() {
  DigitShield.begin();      // Initialize the Digit Shield. This is required before use.
}

void loop() {
  digitShield.setValue(counter);    // Set an integer value to display
  counter = counter + 1;    // Counter-up added 1
  delay(200);               // Delay time when increasing counter
  if (counter >= 9999) {    // Reset counter to 0 if reach 10000
    counter = 0;
  }
}