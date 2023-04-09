//Projeto Do Re Mi
//Toca o começo da musica Asa Branca do Luiz Gonzaga
#define DO 262
#define RE 294
#define MI 330
#define FA 349
#define SOL 392
#define LA 440
#define SI 494
#define DO_2 523
int melodia[] = {DO, RE, MI, SOL, SOL, MI, FA, FA, DO, RE, MI, SOL, SOL, FA, MI};

void setup() {
  pinMode(6, OUTPUT);

}

void loop() {
  for(int i=0; i<15;i++){
    tone(6, melodia[i]);
    delay(700);
    tone(6, 0);
  }
  delay(1000);
}
