int buzzPin = 8;
int delayTime1 = 1;
int delayTime2 = 2;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void makeSound(int delayTime) {
  for (int i = 1; i <= 100; i++) {
    digitalWrite(buzzPin, HIGH);
    delay(delayTime);
    digitalWrite(buzzPin, LOW);
    delay(delayTime);
  }
}

void loop() {
  makeSound(delayTime1);
  makeSound(delayTime2);
}
