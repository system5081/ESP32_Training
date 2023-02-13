void setup() {
  int led;

  for (led=12;led<=14;led++){
    pinMode(led,OUTPUT);
  }
}

void loop() {
int led;

for (led=12;led<=14;led++){
  digitalWrite(led,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
}

}
