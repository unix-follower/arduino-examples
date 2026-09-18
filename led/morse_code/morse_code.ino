int redLED = 8;
int dit = 250;
int dah = 700;
int longDelay = 2000;

void setup() {
  pinMode(redLED, OUTPUT);
}

void blinkLED(int blinkDelay, size_t numberOfBlinks = 3) {
  for (int i = 0; i < numberOfBlinks; i++)
  {
    digitalWrite(redLED, HIGH);
    delay(blinkDelay);
    digitalWrite(redLED, LOW);
    delay(blinkDelay);
  }
}

void saySOS() {
  // S: ... (dit-dit-dit)
  blinkLED(dit);
  // O: --- (dah-dah-dah)
  blinkLED(dah);
  blinkLED(dit);
}

void loop() {
  saySOS();
  delay(longDelay);
}
