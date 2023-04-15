int ledPin[5] = {2 , 3 , 4 , 5 , 6};
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i=2 ; i<7 ; i++)
  digitalWrite(ledPin[i] , HIGH);
}
