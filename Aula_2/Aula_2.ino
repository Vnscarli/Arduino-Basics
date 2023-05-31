
void setup(){
  pinMode(8, OUTPUT); //DEFINE O PINO COMO SAÍDA
  pinMode(6, INPUT); //DEFINE O PINO COMO ENTRADA
}
void loop(){
 if(digitalRead(6) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
    digitalWrite(8, HIGH); //ACENDE O LED
 }
   delay(100);
  digitalWrite(8, LOW); //APAGA O LED
 
}
