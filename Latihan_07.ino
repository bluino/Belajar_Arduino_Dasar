/* Bluino Starter Shield
   Latihan 07 Membaca Sensor Suhu

   Use the "serial monitor" window to read a temperature sensor.

   Version 1.0 9/2017 MK
*/



const int temperaturePin = A2;  // We'll use analog input A2 to measure the temperature sensor's signal pin.


void setup() {
    Serial.begin(115200); //Initialize serial port & set baud rate to 115200 bits per second (bps)
}


void loop() {
    float voltage, degreesC, degreesF; //Declare 3 floating point variables

    voltage = getVoltage(temperaturePin); //Measure the voltage at the analog pin

    degreesC = (voltage - 0.5) * 100.0; // Convert the voltage to degrees Celsius

    degreesF = degreesC * (9.0 / 5.0) + 32.0; //Convert degrees Celsius to Fahrenheit

    //Now print to the Serial monitor. Remember the baud must be 115200 on your monitor!
    // These statements will print lines of data like this:
    // "voltage: 0.73 deg C: 22.75 deg F: 72.96"

    Serial.print("voltage: ");
    Serial.print(voltage);
    Serial.print("  deg C: ");
    Serial.print(degreesC);
    Serial.print("  deg F: ");
    Serial.println(degreesF);

    delay(1000); // repeat once per second (change as you wish!)
}


//Function to read and return floating-point value (true voltage) on analog pin
float getVoltage(int pin) {

    return (analogRead(pin) * 0.004882814);
    // This equation converts the 0 to 1023 value that analogRead()
    // returns, into a 0.0 to 5.0 value that is the true voltage being read at that pin.
}

