int buzzPin = 8;
int potPin = A1;
int potValue;
int toneValue;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, OUTPUT);
}

void makeSound(int delayTime) {
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(delayTime);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(delayTime);
}

void loop() {
  potValue = analogRead(potPin);
  toneValue = (9940. / 1023.) * potValue + 60;
  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(toneValue);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(toneValue);
}
