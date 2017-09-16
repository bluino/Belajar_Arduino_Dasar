/* Bluino Starter Shield
   Latihan 09 Mengendalikan Motor Servo

   Sweep a servo back and forth through its full range of motion.

   Version 1.0 9/2017 MK
*/


#include <Servo.h>  // servo library

Servo servo1;  // servo control object


void setup() {
  servo1.attach(3, 900, 2100);  //Connect the servo to pin 3
                                //with a minimum pulse width of
                                //900 and a maximum pulse width of 2100.
}


void loop() {
  int position;

  // Change position at full speed:
  servo1.write(90);    // Tell servo to go to 90 degrees
  delay(1000);         // Pause to get it time to move
  servo1.write(180);   // Tell servo to go to 180 degrees
  delay(1000);         // Pause to get it time to move
  servo1.write(0);     // Tell servo to go to 0 degrees
  delay(1000);         // Pause to get it time to move


  // Tell servo to go to 180 degrees, stepping by two degrees each step
  for(position = 0; position < 180; position += 2) {
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }

  // Tell servo to go to 0 degrees, stepping by one degree each step
  for(position = 180; position >= 0; position -= 1) {
    servo1.write(position);  // Move to next position
    delay(20);               // Short pause to allow it to move
  }
}