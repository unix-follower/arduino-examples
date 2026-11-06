int xPin = A0;
int yPin = A1;
int switchPin = 2;
int xValue;
int yValue;
int switchValue;
int delayTime = 200;

void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
}

void loop() {
  xValue = analogRead(xPin);
  yValue = analogRead(yPin);
  switchValue = analogRead(switchPin);
  delay(delayTime);
  Serial.print("x value = ");
  Serial.print(xValue);
  Serial.print(" y value = ");
  Serial.print(yValue);
  Serial.print(". Switch state is ");
  Serial.println(switchValue);
}
