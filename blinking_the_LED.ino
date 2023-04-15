int led1 = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1 , OUTPUT); //as led gives the output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1 , HIGH); //to glow the led
  delay(500); //giving time delay in milli sec
  digitalWrite(led1 , LOW);  //to turn of the led
  delay(500);

}
