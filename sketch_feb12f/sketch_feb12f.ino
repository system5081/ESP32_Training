void setup() {
  unsigned long s_time,e_time;

  boolean is_break = false;

  Serial.begin(115200);
  pinMode(2,INPUT_PULLUP);
  delay(1000);
  Serial.println("3");
  delay(1000);
  Serial.println("2");
  delay(1000);
  Serial.println("1");
  delay(1000);
  Serial.println("Start");
  s_time=millis();

  while (e_time=millis(),e_time - s_time < 10000){
    if(digitalRead(2)==LOW){
        is_break=true;
        break;
    }
  }

  if (is_break==true){
    Serial.println();
    Serial.print("時間は");
    Serial.print((double) (e_time - s_time)/1000.0);
    Serial.println("秒でした");
  }
  else{
    Serial.println("10秒をこえました");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
