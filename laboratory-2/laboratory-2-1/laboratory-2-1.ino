void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  // Задаем пины 5 и 6 как входы
  pinMode(5, INPUT);
  pinMode(6, INPUT);
}

void loop() {
  if (digitalRead(6) == 0) {
    digitalWrite(0, HIGH);
  } else {
    digitalWrite(0, LOW);
  }
  if (digitalRead(5) == 0) {
    digitalWrite(1, HIGH);
  } else {
    digitalWrite(1, LOW);
  }
}
