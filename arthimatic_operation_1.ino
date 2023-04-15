void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  int x = 5;
  int y = 6;
  int a = x + y;
  Serial.println(a);
  delay(1000);
  int b = x - y;
  Serial.println(b);
  int c = x * y;
  Serial.println(c);
  int d = x / y;
  Serial.println(d);
  delay(1000);
  int e = x % y;
  Serial.println(e);
  delay(10000);
}
