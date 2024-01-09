const int IN1= 7;
const int IN2 = 8;

const int ENA = 9; 
const int SPEED = 100; // DC motor

const RELAY_PIN = 10; // humidifier
const MIC_PIN = A0; // microphone


void setup() {
  // motor
  pinMode (IN1, OUTPUT); 
  pinMode (IN2, OUTPUT); 
  pinMode (ENA, OUTPUT); 

  // humidifier
  pinMode (RELAY_PIN, OUTPUT); 
}

void loop() {
  // motor
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN2, LOW); 
  analogWrite(ENA, SPEED); 

  // humidifier
  digitalWrite(RELAY_PIN, HIGH);
  delay(17000);
  digitalWrite(RELAY_PIN, LOW);

  // microphone
  int soundLevel = analogRead(MIC_PIN);

  Serial.print("Sound level: ");
  Serial.println(SoundLevel);

  int trainSoundThreshold = 400;
  if (soundLevel > trainSoundThreshold) {
    playTrainSound()'
  }

  delay(4000);
}
    
void playTrainSound() {
  Serial.println("WOOT WOOT");
  delay(4000);
}
