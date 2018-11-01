#include <Servo.h>

Servo myServo;

int const potPin = A0;
int potVal;
int angle;

void setup() {
 pinMode (11, OUTPUT); 
      pinMode (12, OUTPUT);
      pinMode (13, OUTPUT);
 myServo.attach(9);

 
 Serial.begin(9600);
}
  



void loop() {
 potVal = analogRead(potPin);
 Serial.print("potVal: ");
 Serial.print(potVal);
 angle = map(potVal, 0, 1023, 0, 179);
 Serial.print(",angle: ");
 Serial.println(angle);
 myServo.write(angle);
 delay(15);
   
}
