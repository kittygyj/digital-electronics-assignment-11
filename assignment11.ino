/*
  Blink
  Turns on LEDs one by one, than turns off LEDs one by one, with one second between each led.

  This example code is in the public domain.
 */

int ledPins[4] = {2, 4, 6, 8};

void setup() {
  for (i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (i = 0; i < 4; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
  }
  for (i = 3; i > -1; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(1000);
  }
}
