/*
  Blink
  Turns on LEDs one by one, than turns off LEDs one by one, with one second between each led.

  This example code is in the public domain.
 */

int ledOne = 2;
int ledTwo = 4;
int ledThree = 6;
int ledFour = 8;

void setup() {
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
}

void loop() {
  digitalWrite(ledOne, HIGH);
  delay(1000);             
  digitalWrite(ledTwo, HIGH);
  delay(1000);
  digitalWrite(ledThree, HIGH);
  delay(1000);             
  digitalWrite(ledFour, HIGH);
  delay(1000);
  digitalWrite(ledFour, LOW);
  delay(1000);
  digitalWrite(ledThree, LOW);
  delay(1000);
  digitalWrite(ledTwo, LOW);
  delay(1000);
  digitalWrite(ledOne, LOW);
  delay(1000);
}
