int enA = 3;
int in1 = 2;
int in2 = 4;

int enB = 6;
int in3 = 5;
int in4 = 7;

void setup() {
   pinMode(enA, OUTPUT);
   pinMode(in1, OUTPUT);
   pinMode(in2, OUTPUT);
   pinMode(enB, OUTPUT);
   pinMode(in3, OUTPUT);
   pinMode(in4, OUTPUT);

   digitalWrite(in1, HIGH);
   digitalWrite(in2, LOW);
   digitalWrite(in3, LOW);
   digitalWrite(in4, HIGH);
   analogWrite(enA, 255);
   analogWrite(enB, 255);
   delay(5000);

   digitalWrite(in1, LOW);
   digitalWrite(in2, LOW);
   digitalWrite(in3, LOW);
   digitalWrite(in4, LOW);
   analogWrite(enA, 0);
   analogWrite(enB, 0);
   delay(2000);

   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   digitalWrite(in3, HIGH);
   digitalWrite(in4, LOW);
   analogWrite(enA, 255);
   analogWrite(enB, 255);
   delay(5000);

   digitalWrite(in1, HIGH);
   digitalWrite(in2, LOW);
   digitalWrite(in3, HIGH);
   digitalWrite(in4, LOW);
   analogWrite(enA, 255);
   analogWrite(enB, 255);
   delay(5000);

   digitalWrite(in1, LOW);
   digitalWrite(in2, LOW);
   digitalWrite(in3, LOW);
   digitalWrite(in4, LOW);
   analogWrite(enA, 0);
   analogWrite(enB, 0);
   delay(2000);
}
void loop() {
  //
}
