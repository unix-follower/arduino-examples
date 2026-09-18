int redPin = 9;
int bright = 1;  // range: 0-255

void setup() {
  pinMode(redPin, OUTPUT);
}

void loop() {
  analogWrite(redPin, bright);
}
