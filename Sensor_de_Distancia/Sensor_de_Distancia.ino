int distancia = 0;

long distanciaUltrassonica(int trigger, int echo)
{
  pinMode(trigger, OUTPUT);  
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
 
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  pinMode(echo, INPUT);
 
  return pulseIn(echo, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop()
{
  
  distancia = 0.01723 * distanciaUltrassonica(13, 12);
  Serial.println(distancia);

 
  if (distancia <= 10) {
    tone(6, 52, 100); 
  }
  delay(10); 
}
