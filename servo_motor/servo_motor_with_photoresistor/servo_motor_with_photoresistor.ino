#include <Servo.h>

int servoPin = 9;
int lightValue;
int lightPin = A4;
int delayTime = 250;
int angle;
Servo servo;

void setup() {
  Serial.begin(9600);
  pinMode(lightPin, INPUT);
  pinMode(servoPin, OUTPUT);
  servo.attach(servoPin);
}

void loop() {
  lightValue = analogRead(lightPin);
  Serial.println(lightValue);
  delay(delayTime);
  angle = (-16. / 63.) * lightValue + 16. * 780. / 63.;
  servo.write(angle);
  Serial.println(angle);
}
