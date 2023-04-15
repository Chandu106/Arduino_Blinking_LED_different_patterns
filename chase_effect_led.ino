byte ledPin[] = {4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 ,13};
int ledDelay = 65; //delay of the led to glow the second led bulb
int direction = 1; //direction of the led to move +1 indicates forward and -1 indicates backward
int currentLED = 0; //in order to trace the led , later it is used in loops to glow the led
unsigned long changeTime;
void setup() //declaring all the led using loops
{
  for (int x = 0 ; x < 10 ; x++)
  {
    pinMode(ledPin[x] , OUTPUT);
  }
  changeTime = millis(); //miilis is used to count the number of milli seconds throughout the process
}
void loop()
{
  if(millis() - changeTime > ledDelay) //condition obviously it is going to be satisfied
  {
    changeLED();
    changeTime = millis();
  }
}
void changeLED()
{
  for (int x = 0 ; x < 10 ; x++)
  {
    digitalWrite(ledPin[x] , LOW);
  }
  digitalWrite(ledPin[currentLED] , HIGH);
  currentLED += direction;
  if (currentLED == 9)
  {
    direction = -1;
  }
  if (currentLED = 0)
  {
    direction = 1;
  }
}
