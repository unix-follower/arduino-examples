int lightPin = A0;
int buzzPin = 8;
int lightValue;
int delayTime = 250;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  lightValue = analogRead(lightPin);
  delayTime = (9. / 550.) * lightValue - (9. * 200. / 550.) + 1.;
  Serial.println(delayTime);
  digitalWrite(buzzPin, HIGH);
  delay(delayTime);
  digitalWrite(buzzPin, LOW);
}
