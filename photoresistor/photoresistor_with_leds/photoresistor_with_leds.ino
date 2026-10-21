int lightPen = A0;
int lightValue;
int delayTime = 250;
int greenPin = 8;
int redPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(lightPen, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  lightValue = analogRead(lightPen);
  Serial.println(lightValue);
  delay(delayTime);
  if (lightValue > 350) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }
  if (lightValue < 350) {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
}
