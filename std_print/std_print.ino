int waitTime = 750;
String prefix = "A Circle With Radius ";
String suffix = " Has an Area of ";
float pi = 3.14;
float radius = 2;
float area;

void setup() {
  Serial.begin(115200);
}

void loop() {
  area = pi * radius * radius;
  Serial.print(prefix);
  Serial.print(radius);
  Serial.print(suffix);
  Serial.print(area);
  Serial.println('.');
  delay(waitTime);
}
