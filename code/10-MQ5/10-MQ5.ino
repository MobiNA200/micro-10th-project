void setup() {
  Serial.begin(9600);
}

void loop() {
  float sensorValue;

  for(int x = 0; x < 100; x++){
    sensorValue = analogRead(A0);
  }
  Serial.print("sensor value : ");
  Serial.print(sensorValue);
  Serial.println("V");
  delay(1000);
}
