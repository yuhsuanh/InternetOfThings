 /*       Stu#: 200443723
  *       Name: Yu-Hsuan Huang
  *       Date: January 16th
  *      
  *       Lab 2 - Level 3     
  */
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.

void setup() {
  pinMode(RGBRedPin, OUTPUT);    //Setup red RGB LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT);  //Setup green RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT);   //Setup blue RGB LED pin as an output pin.
}

void loop() {
  //level 3
  //1
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(100);
  digitalWrite(RGBGreenPin, LOW);
  delay(100);
  digitalWrite(RGBRedPin, HIGH);
  delay(100);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(100);
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, LOW);
  delay(100);
  digitalWrite(RGBGreenPin, LOW);
  digitalWrite(RGBBluePin, LOW);
  delay(100);
  digitalWrite(RGBBluePin, HIGH);
  delay(100);
  digitalWrite(RGBRedPin, LOW);
  delay(100);
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(100);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  delay(100);

  //2
  digitalWrite(RGBGreenPin, HIGH);
  delay(200);
  digitalWrite(RGBRedPin, HIGH);
  delay(200);
  digitalWrite(RGBGreenPin, LOW);
  digitalWrite(RGBBluePin, HIGH);
  delay(200);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, HIGH);
  delay(200);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  delay(200);

  //3
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(500);
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, HIGH);
  delay(500);
  //4
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, HIGH);
  delay(500);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(500);
  //5
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  delay(500);
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, LOW);
  delay(500);
  //6
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, LOW);
  delay(500);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, LOW);
  delay(500);
  //7
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(500);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  delay(500);

  //8
  digitalWrite(RGBRedPin, HIGH);
  delay(200);
  digitalWrite(RGBBluePin, HIGH);
  delay(200);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, HIGH);
  delay(200);
  digitalWrite(RGBRedPin, HIGH);
  delay(200);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  delay(2000);
  
  //9-14
  digitalWrite(RGBRedPin, HIGH);
  delay(1000);
  digitalWrite(RGBGreenPin, HIGH);
  delay(1000);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  digitalWrite(RGBBluePin, HIGH);
  delay(1000);
  digitalWrite(RGBRedPin, HIGH);
  delay(1000);
  digitalWrite(RGBGreenPin, HIGH);
  digitalWrite(RGBBluePin, LOW);
  delay(1000);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  delay(1000);
  
  //15
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(100);
  digitalWrite(RGBGreenPin, LOW);
  delay(100);
  digitalWrite(RGBRedPin, HIGH);
  delay(100);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(100);
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, LOW);
  delay(100);
  digitalWrite(RGBGreenPin, LOW);
  digitalWrite(RGBBluePin, LOW);
  delay(100);
  digitalWrite(RGBBluePin, HIGH);
  delay(100);
  digitalWrite(RGBRedPin, LOW);
  delay(100);
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBGreenPin, HIGH);
  delay(100);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  delay(100);
  
}
