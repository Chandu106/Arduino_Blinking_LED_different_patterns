int ledPin = 10;
byte flicker[] = {20 , 89 , 45 , 79 , 12 , 90, 34 };
void setup()
{
  pinMode(ledPin , OUTPUT);
}
void loop()
{
  int i;
  for(i = 0 ; i<6 ; i++)
  {
    analogWrite(ledPin , flicker[i]);
    delay(1000);
  }
}
