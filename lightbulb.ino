
void setup ()  {
      pinMode (3, OUTPUT); 
      pinMode (2, OUTPUT);
      pinMode (4, OUTPUT);
      pinMode (5, OUTPUT);
      pinMode (6, OUTPUT);
      pinMode (7, OUTPUT);
      pinMode (8, OUTPUT);
      pinMode (9, OUTPUT);
     
   } // setup
  

void loop () {
 int x=10;
for(int i=2;i<10;i++){
  digitalWrite(i,HIGH);
  delay(x);
  digitalWrite(i-1,LOW);
  delay(x);
}
for(int i=10;i>2;i--){
  digitalWrite(i,HIGH);
  delay(x);
  digitalWrite(i,LOW);
  delay(x);
}


/*
        
  digitalWrite(2,HIGH);
delay(100);
digitalWrite(2,LOW);
delay(100);
    digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  delay(100);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(5,LOW);
  delay(100);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(6,LOW);
  delay(100);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(7,LOW);
  delay(100);
  digitalWrite(8,HIGH);
  delay(100);
  digitalWrite(8,LOW);
  delay(100);
  digitalWrite(9,HIGH);
  delay(100);
  digitalWrite(9,LOW);
  delay(100);*/
}
