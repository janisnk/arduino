void setup() {
  Serial.begin(50000);

}

void loop() {
  Serial.write(analogRead(A0)/4);
  delay(30);
}
