void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);

}

void loop() {
  digitalWrite(12, HIGH);
  delay(5000);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  delay(5000);
  digitalWrite(10, LOW);
}
