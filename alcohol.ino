int mq3Pin = A5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(mq3Pin);
  delay(1000);

   Serial.print("A");
   Serial.print("00000");
   Serial.print(val);
   Serial.println();
}
