void setup() {
  pinMode(35,INPUT);
  Serial.begin(115200);
}

void loop() {
  int dac;
  float volt;

  dac = analogRead(35);
  volt= 3.3*dac/4096;
  Serial.println(volt);
  delay(1000);
}
