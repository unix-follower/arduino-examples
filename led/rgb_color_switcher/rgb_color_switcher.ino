int redPin = 8;
int greenPin = 9;
int bluePin = 10;
String color;
String msg = "What color do you want?";

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void logColor(String color) {
  Serial.println("Activating " + color);
}

void loop() {
  Serial.println(msg);

  while (Serial.available() == 0) {
  }

  color = Serial.readString();
  color.toLowerCase();
  color.trim();

  if (color == "red") {
    logColor(color);
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  } else if (color == "green") {
    logColor(color);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  } else if (color == "blue") {
    logColor(color);
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  } else if (color == "off") {
    Serial.println("Turning off");
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
}
