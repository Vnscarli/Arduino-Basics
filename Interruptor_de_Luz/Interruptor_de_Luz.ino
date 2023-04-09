//Interruptor de Luz

bool led = 0;
void setup() {
  pinMode(7, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop() {
  if(digitalRead(7) == LOW){
    led = !led;
    digitalWrite(13, led);
    delay(1000);
    while(digitalRead(7)==LOW);
    delay(100);
  }

}
