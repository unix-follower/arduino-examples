int potPin = A1;
int ledPin = 6;
float potValue;
float ledValue;
int delayTime = 50;

void setup() {
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);
  ledValue = 255. / 1023. * potValue;
  analogWrite(ledPin, ledValue);
  Serial.print("LED voltage is ");
  Serial.println(ledValue);

  delay(delayTime);
}
