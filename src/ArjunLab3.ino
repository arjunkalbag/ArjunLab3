SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {

  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);

}


void loop() {

  delay(125);
  analogWrite(A1, rand() % 256);
  analogWrite(A2, rand() % 256);
  analogWrite(A3, rand() % 256);
  
}