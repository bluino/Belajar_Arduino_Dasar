/* Bluino Starter Shield
   Latihan 10 Mengendalikan Relay

   A relay is a electrically-controlled mechanical switch. It has an
   electro-magnetic coil that either opens or closes a switch.

   Version 1.0 9/2017 MK
*/


const int relayPin = 12;     // This pin drives the transistor (which drives the relay)
const int timeDelay = 1000;  // delay in ms for on and off phases

// You can make timeDelay shorter, but note that relays, being
// mechanical devices, will wear out quickly if you try to drive them too fast.


void setup() {
  pinMode(relayPin, OUTPUT);  // set pin as an output
}


void loop() {
  digitalWrite(relayPin, HIGH);  // turn the relay on
  delay(timeDelay);              // wait for one second
  digitalWrite(relayPin, LOW);   // turn the relay off
  delay(timeDelay);              // wait for one second
}