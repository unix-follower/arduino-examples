int buttonPin1 = 12;
int buttonPin2 = 11;
int buttonValue1;
int buttonValue2;
int delayTime = 250;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  buttonValue1 = digitalRead(buttonPin1);
  buttonValue2 = digitalRead(buttonPin2);
  Serial.print("Button 1 = ");
  Serial.print(buttonValue1);
  Serial.print(", ");
  Serial.print("Button 2 = ");
  Serial.println(buttonValue2);
  delay(delayTime);
}
