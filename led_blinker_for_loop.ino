int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i = 0 ; i < 11 ; i++)
  {
    digitalWrite(ledPin , HIGH);
    delay(10);
    digitalWrite(ledPin , LOW);
    delay(10);
  }
}
