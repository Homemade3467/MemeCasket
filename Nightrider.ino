int x=25
;
void setup() {
  pinMode (1, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
}
void loop() {
  digitalWrite(1,HIGH);
  delay(x);  
  digitalWrite(1,LOW);
  delay(x);
  digitalWrite(2,HIGH);
  delay(x);
  digitalWrite(2,LOW);
  delay(x);
  digitalWrite(3,HIGH);
  delay(x);
  digitalWrite(3,LOW);
  delay(x);
  digitalWrite(4,HIGH);
  delay(x);
  digitalWrite(4,LOW);
  delay(x);
  digitalWrite(4,HIGH);
  delay(x);  
  digitalWrite(4,LOW);
  delay(x);
  digitalWrite(3,HIGH);
  delay(x);
  digitalWrite(3,LOW);
  delay(x);
  digitalWrite(2,HIGH);
  delay(x);
  digitalWrite(2,LOW);
  delay(x);
  digitalWrite(1,HIGH);
  delay(x);
  digitalWrite(1,LOW);
  delay(x);
}//loop
