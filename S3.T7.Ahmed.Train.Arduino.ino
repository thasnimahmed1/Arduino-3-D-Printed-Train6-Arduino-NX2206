const int IN1= 7;
const int IN2 = 8;

const int ENA = 9; 
const int SPEED = 100;

void setup() {
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENA, OUTPUT);
}

void loop() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  analogWrite(ENA, SPEED);
}
