int buzzPin = 8;
int potPin = A3;
int potValue;
int delayTime = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  potValue = analogRead(potPin);
  Serial.println(potValue);
  delay(800);

  while (potValue > 300) {
    digitalWrite(buzzPin, HIGH);
    potValue = analogRead(potPin);
    Serial.println(potValue);
  }
  digitalWrite(buzzPin, LOW);
}
