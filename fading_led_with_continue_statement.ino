int ledPin = 9;
void setup()
{
  
}
void loop()
{
  int fade;
  for(fade = 0 ; fade <= 220 ; fade+=5)
  {
    if(fade > 40 && fade>180)
    {
      continue;
    }
    analogWrite(ledPin , fade);
    delay(30);
  }
  for(fade = 220 ; fade >= 0 ; fade -=5)
  {
    analogWrite(ledPin, fade);
    delay(30);
  }
}
