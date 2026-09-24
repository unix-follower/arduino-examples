int voltPin = A2;
int readVal;
float v2;
int delayTime = 250;

void setup() {
  Serial.begin(9600);
}

void loop() {
  readVal = analogRead(voltPin);
  v2 = 5. / 1023. * readVal;
  Serial.println(v2);
  delay(delayTime);
}
