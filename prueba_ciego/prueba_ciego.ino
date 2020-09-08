int vibrador=5;
int echo=3;
int trig=2;
int duracion;
int distancia;

void setup() {

  pinMode(vibrador, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  
}

void loop() {

  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  duracion = pulseIn(echo, HIGH);
  distancia = duracion / 58.2;

  if ((distancia < 100) && (distancia > 50)) {
    analogWrite(vibrador, 140);
  }

  if ((distancia < 50) && (distancia > 0)) {

    analogWrite(vibrador, 255);

  }

  if (distancia > 100) {

    analogWrite(vibrador, 0);

  }

}
