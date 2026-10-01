int potValue;
int delayTime = 300;
int potPin = A0;
int negativePin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(negativePin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);
  Serial.println(potValue);

  while (potValue >= 300) {
    digitalWrite(negativePin, HIGH);
    potValue = analogRead(potPin);
    Serial.println(potValue);
    delay(delayTime);
  }
  digitalWrite(negativePin, LOW);
}
