int ledPin = 8;
int buttonPin = 12;
int buttonRead;

int delayTime = 100;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonRead = digitalRead(buttonPin);
  Serial.println(buttonRead);
  delay(delayTime);
  if (buttonRead == 1) {
    digitalWrite(ledPin, LOW);
  }
  if (buttonRead == 0) {
    digitalWrite(ledPin, HIGH);
  }
}
