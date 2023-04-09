//Sensor de Luz Ambiente
//12 com led verde (luz acessa)
//13 com led vermelho (luz apagada)
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  if(analogRead(A0)<450){
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  }
  else{
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }
  delay(10);
}
