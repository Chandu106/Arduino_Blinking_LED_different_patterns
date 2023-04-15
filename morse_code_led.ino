int led = 5;
int i;
void setup()
{
  pinMode(led , OUTPUT);
}
void loop()
{
  for(i = 0 ; i<3 ; i++)
  {
    digitalWrite(led , HIGH);
    delay(150);
    digitalWrite(led , LOW);
    delay(100);
  }
  delay(100);
  for(i = 0 ; i<3 ; i++)
  {
    digitalWrite(led , HIGH);
    delay(400);
    digitalWrite(led , LOW);
    delay(100);
  }
  delay(100);
  for(i = 0 ; i<3 ; i++)
  {
    digitalWrite(led , HIGH);
    delay(150);
    digitalWrite(led , LOW);
    delay(100);
  }
  delay(5000);
}
