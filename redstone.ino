/*
  ESP8266 Blink by Simon Peter
  Blink the blue LED on the ESP-01 module
  This example code is in the public domain

  The blue LED on the ESP-01 module is connected to GPIO1
  (which is also the TXD pin; so we cannot use Serial.print() at the same time)

  Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

void setup() {
  pinMode(16, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(5, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(4, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(0, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  digitalWrite(16, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(0, HIGH);
}

// the loop function runs over and over again forever
void loop() {
}
