void setup() {
  // put your setup code here, to run once:
pinMode(A0, INPUT);
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int voltage = analogRead(A0);
Serial.println(voltage);
if (voltage > 600){
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
}
else {
  digitalWrite(13, LOW);
}

}
