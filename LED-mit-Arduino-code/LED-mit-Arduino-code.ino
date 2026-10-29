void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  //digitalWrite(12, LOW);
  delay(1000);
    digitalWrite(13, LOW);
  //digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  delay(2000);
     digitalWrite(11, LOW);
  //digitalWrite(10, LOW);
  delay(1000);
  //digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  delay(500);
  digitalWrite(9, HIGH);
  delay(3000);
  digitalWrite(9, LOW);
  delay(1000);
}
