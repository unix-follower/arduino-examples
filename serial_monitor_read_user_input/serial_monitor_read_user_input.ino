int numberOfBlinks;
String msg = "What is the radius of your circle?";
String errorMsg = "Invalid radius";
String responseMsg = "Your circle has area of: ";
int delayTime = 500;
float radius;
float area;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(msg);

  while (Serial.available() == 0) {
  }

  radius = Serial.parseFloat();
  if (radius > 0) {
    area = PI * radius * radius;

    Serial.print(responseMsg);
    Serial.println(area);
  } else {
    Serial.println(errorMsg);
  }
}
