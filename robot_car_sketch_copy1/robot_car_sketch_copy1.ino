// Only Motor B connections used
int enB = 3;
int in3 = 5;
int in4 = 4;

void setup() {
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // Start with motors off
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void loop() {
  directionControl();
  delay(1000);
  speedControl();
  delay(1000);
}

void directionControl() {
  analogWrite(enB, 255); // Full speed

  // Move forward
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(5000);

  // Move backward
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(5000);

  // Stop motors
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void speedControl() {
  // Move backward slowly then speed up
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  // Accelerate
  for (int i = 0; i <= 255; i++) {
    analogWrite(enB, i);
    delay(20);
  }

  // Decelerate
  for (int i = 255; i >= 0; i--) {
    analogWrite(enB, i);
    delay(20);
  }

  // Stop
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

