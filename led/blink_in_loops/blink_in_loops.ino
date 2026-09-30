int yellowPin = 6;
int redPin = 9;
int yellowTime = 500;
int redTime = 500;
int yellowBlink = 3;
int redBlink = 5;

void setup() {
  Serial.begin(9600);
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void blinkLed(size_t pin, size_t delayTime) {
  digitalWrite(pin, HIGH);
  delay(delayTime);
  digitalWrite(pin, LOW);
  delay(delayTime);
}

void loop() {
  for (int i = 1; i <= yellowBlink; i++) {
    blinkLed(yellowPin, yellowTime);
  }

  for (int i = 1; i <= redBlink; i++) {
    blinkLed(redPin, redTime);
  }
}
