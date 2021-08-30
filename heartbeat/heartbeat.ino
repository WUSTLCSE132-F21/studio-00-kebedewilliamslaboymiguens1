void setup() {
  Serial.begin(9600);
}

void loop() {
  int n = millis();
  delay(1000);
  Serial.print(n/1000);
  Serial.println(" sec has elapsed");
}
