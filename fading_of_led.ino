int ledPin[5] = {2,3,4,5,6};
void setup()
{
pinMode(ledPin,OUTPUT);
}
void loop()
{
int i=2;
while(i<7)
{
digitalWrite(ledPin[i],HIGH);
i++;
}
}
