/* Belajar Arduino Dasar
   Latihan 01 LED Berkedip
 
   Turn an LED on for one second, off for one second,
   and repeat forever.

   Version 1.0 9/2017 MK
*/

void setup()
{
  pinMode(13, OUTPUT);   // Define pin D13 as output
}

void loop()
{
  digitalWrite(13, HIGH);   // Turn on the LED
  delay(1000);              // Wait for one second
  digitalWrite(13, LOW);    // Turn off the LED
  delay(1000);              // Wait for one second
}


