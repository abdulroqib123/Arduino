void setup() {
  pinMode(9, OUTPUT); // enA
  pinMode(3, OUTPUT); // enB
  pinMode(8, OUTPUT); // in1
  pinMode(7, OUTPUT); // in2
  pinMode(5, OUTPUT); // in3
  pinMode(4, OUTPUT); // in4

  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);

  analogWrite(9, 255);
  analogWrite(3, 255);
}

void loop() {
  // Nothing needed
}
