// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 0-4 as an output.
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(500);
}
