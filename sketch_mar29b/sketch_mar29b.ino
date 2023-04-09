void setup() {
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  

}

void loop() {
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  delay(1000);
  digitalWrite(6, HIGH);
  delay(500);

  digitalWrite(6, LOW);
  delay(1000);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(
   1000);
}
