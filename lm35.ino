int tempPin = A0;
float temperature = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temperature = analogRead(tempPin) * 0.48828125;
  Serial.println(temperature);
  delay(1000);
}
