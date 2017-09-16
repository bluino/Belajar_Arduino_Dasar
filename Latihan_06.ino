/* Bluino Starter Shield
   Latihan 06 Membaca Sensor Cahaya

   Use a photoresistor (light sensor) to control the brightnessof a LED.

   Version 1.0 9/2017 MK
*/

const int sensorPin = A1;
const int ledPin = 9;


int lightLevel;  // We'll also set up some global variables for the light level
int calibratedlightLevel; // used to store the scaled / calibrated lightLevel

void setup() {
  pinMode(ledPin, OUTPUT);    // Set up the LED pin to be an output.
}

void loop() {
  lightLevel = analogRead(sensorPin);  // reads the voltage on the sensorPin

  calibratedlightLevel = map(lightLevel, 0, 1023, 0, 255);  // scale the lightLevel from 0 - 1023 range to 0 - 255 range.
                                                  // the map() function applies a linear scale / offset.
                                                  // map(inputValue, fromMin, fromMax, toMin, toMax);

  analogWrite(ledPin, calibratedlightLevel);    // set the led level based on the input lightLevel.
}

