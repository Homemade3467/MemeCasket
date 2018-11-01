const int greenLEDPin = 3;
const int redLEDPin = 2;
const int blueLEDPin = 4;
const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;
int redValue = 0;
int greenValue = 0;
int blueValue = 0;
int redSensorValue = 0;
int greenSensorValue = 0;
int blueSensorValue = 0;

void setup ()  {
  Serial.begin(9600);
     
      pinMode (greenLEDPin, OUTPUT); 
      pinMode (redLEDPin, OUTPUT);
      pinMode (blueLEDPin, OUTPUT);
   } 
  
void loop () {
  printstuff();
redSensorValue = analogRead(redSensorPin);
greenSensorValue = analogRead(greenSensorPin);
blueSensorValue = analogRead(blueSensorPin);

redValue = redSensorValue/4;
greenValue = greenSensorValue/4;
blueValue = blueSensorValue/4;

analogWrite(redLEDPin, redValue);
analogWrite(greenLEDPin, greenValue);
analogWrite(blueLEDPin, blueValue);
}
void printstuff(){
  Serial.print("Raw Sensor Values \t Red: ");
Serial.print(redSensorValue);
Serial.print("\t Green: ");
Serial.print(greenSensorValue);
Serial.print("\t Blue: ");
Serial.println(blueSensorValue);

}

 
