#include <Servo.h>

int servoPin = 9;
int servoPosition = 0;
Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(servoPin);
}

void loop() {
  Serial.println("What is an angle for the Servo?");
  while (Serial.available() == 0) {
  }
  servoPosition = Serial.parseInt();
  servo.write(servoPosition);
}
