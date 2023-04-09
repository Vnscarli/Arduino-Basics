//Controlar Motor

#include <Servo.h>
Servo meu Servo;

int valorPot;

void setup() {
  meuServo.attach(9);
}

void loop() {
  valorPot = analogRead(A0);
  valorPot = map(A0, 0, 1023, 0, 180);
  meuServo.write(valorPot);
  delay(15);
}
//não deu certo
