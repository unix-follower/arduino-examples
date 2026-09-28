int voltPin = A2;
int readVal;
float v2;
int delayTime = 250;
int pin9 = 9;

void setup() {
  Serial.begin(9600);
  pinMode(voltPin, INPUT);
  pinMode(pin9, OUTPUT);
}

void loop() {
  readVal = analogRead(voltPin);
  v2 = 5. / 1023. * readVal;
  Serial.print("Potentiometer voltage is ");
  Serial.println(v2);
  if (v2 >= 5) {
    digitalWrite(pin9, HIGH);
  } else {
    digitalWrite(pin9, LOW);
  }

  delay(delayTime);
}
