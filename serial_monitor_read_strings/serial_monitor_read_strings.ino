String msg = "What is the LED color?";
String color;
int yellowPin = 10;
int greenPin = 11;
int redPin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  Serial.println(msg);

  while (Serial.available() == 0) {
  }

  color = Serial.readString();
  color.toLowerCase();
  color.trim();

  if (color == "red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, LOW);
  } else if (color == "green") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(yellowPin, LOW);
  } else if (color == "yellow") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
  }
}
