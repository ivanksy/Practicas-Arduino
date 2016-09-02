
int led2=3, led3=4, led4=5, led5=6, led6=7;

void setup() {
  for(int pin=3; pin <= led6; pin++){
    pinMode(pin, OUTPUT);
    }
}

void loop() {
  int rnd=random (3,8);
  digitalWrite(rnd, HIGH);
  delay(150);
  digitalWrite(rnd, LOW);
  delay(150);
}

/*
 Integrantes:
 -Gabriela Garcia Estrella
 -Reyes Jiménez Raúl
 -Ivan Nieto Lozada
  */
