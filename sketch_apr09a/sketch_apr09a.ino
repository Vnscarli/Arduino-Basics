// Semáforo
void setup() {
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
}

void loop() {
  digitalWrite(12, HIGH);
  digitalWrite(8, HIGH);
  delay(5000);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(5000);
  digitalWrite(9, LOW);
  for(int x = 0; x<5; x++){
    digitalWrite(8, HIGH);
    delay(250);
    digitalWrite(8, LOW);
    delay(250);  
  }
  digitalWrite(10, LOW);
}
