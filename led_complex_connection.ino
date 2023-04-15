int red = 3;
int yellow = 4;
int green = 5;
int i;
void setup()
{
  pinMode(red , OUTPUT);
  pinMode(yellow , OUTPUT);
  pinMode(green , OUTPUT);
}
void loop()
{
  for ( i = 0 ; i < 11 ; i++)
  {
    digitalWrite(green , HIGH);
    digitalWrite(yellow , HIGH);
    delay(100);
    digitalWrite(green , LOW);
    digitalWrite(yellow , LOW);
    delay(100);
  }
  for ( i = 0 ; i < 11 ; i++)
  {
    digitalWrite(green , HIGH);
    digitalWrite(red , HIGH);
    delay(100);
    digitalWrite(green , LOW);
    digitalWrite(red , LOW);
    delay(100);
  }
  for ( i = 0 ; i < 11 ; i++)
  {
    digitalWrite(red , HIGH);
    digitalWrite(yellow , HIGH);
    delay(100);
    digitalWrite(red , LOW);
    digitalWrite(yellow , LOW);
    delay(100);
  }
  for (i = 0 ; i <11 ; i++)
  {
    digitalWrite(red , HIGH);
    digitalWrite(yellow , HIGH);
    digitalWrite(green , HIGH);
    delay(100);
    digitalWrite(red , LOW);
    digitalWrite(yellow , LOW);
    digitalWrite(green , LOW);
    delay(100);
  }
}
