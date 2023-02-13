void setup() {
  pinMode(35,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int dac;

  dac=analogRead(35);
  Serial.print("CdS = ");
  Serial.print(dac);
  Serial.print(", LED = ");
  if (dac<4095){
    digitalWrite(5,HIGH);
    Serial.println("ON");
  }
  else{
    digitalWrite(5,LOW);
    Serial.println("OFF");
  }
  delay(100);
}
