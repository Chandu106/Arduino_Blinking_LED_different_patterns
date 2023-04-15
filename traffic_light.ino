int red = 3;
int yellow = 4;
int green = 5;
void setup() {
  pinMode(red , OUTPUT);
  pinMode(yellow , OUTPUT);
  pinMode(green , OUTPUT);
}
int i = 1;
void loop() {
  while( i > 0)
  {
      digitalWrite(red , HIGH);
      delay(10000);
      digitalWrite(red , LOW);
      digitalWrite(yellow , HIGH);
      delay(2000);
      digitalWrite(yellow , LOW);
      digitalWrite(green , HIGH);
      delay(5000);
      digitalWrite(green , LOW);
      digitalWrite(yellow , HIGH);
      delay(2000);
      digitalWrite(yellow , LOW);
  }
}
