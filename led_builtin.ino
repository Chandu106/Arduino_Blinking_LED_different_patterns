
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN , OUTPUT); // led builtin is the inbuilt function for the arduino.

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN , HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN , LOW);
  delay(500);

}
