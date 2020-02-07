/*
        Author: Yu-Hsuan Huang
        Date: 2020/02/06
        
        Title: 321Maker Experiment #007 - RGB Fade
        Description: This program will fade the Red, Green, Blue(RGB) LED on the 321Maker shield.
        Tutorial:  http://321maker.com/tutorials/rgb-fade
        Revision Date: January 15, 2016
        Licence: http://321maker.mit-license.org/
        Requirements:  Arduino with 321Maker Shield
        Instructions: The RGB LED is connected to a Pulse Width Modulation(PWM) pin. 
        You can use analogWrite to control brightness.
*/
int rotationPin = A0; //The rotation sensor is plugged into pin A0 of the Arduino.
int button1Pin = 2;    //The SW1 button is connect to pin 2 of the Arduino.
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.

int fadeDelay = 5;    //This is the number of milliseconds that it will take between steps during fading.
int mode = 0;         //Mode 0 to 2. 0: red, 1: Green, 2: Blue

int temp = 0;    //temp data
int brightR = 0; //brightness of the red LED
int brightG = 0; //brightness of the green LED
int brightB = 0; //brightness of the blue LED

//The Setup function runs once.
void setup() {
  Serial.begin(9600);
  pinMode(button1Pin, INPUT);
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
}

//The loop function runs forever.
void loop() {

  if (digitalRead(button1Pin) == LOW) {
    mode = ++mode % 3;
    delay(300);
  }

  if(mode == 0) { //Setting brightness of the red LED
    temp = analogRead(rotationPin);
    brightR = map(temp, 0, 1023, 0, 255);
    Serial.println("R: " + brightR);
    analogWrite(RGBRedPin, brightR);
    delay(100);
  }

  if(mode == 1) { //Setting brightness of the green LED
    temp = analogRead(rotationPin);
    brightG = map(temp, 0, 1023, 0, 255);
    Serial.println("G:" + brightG);
    analogWrite(RGBGreenPin, brightG);
    delay(100);
  }

  if(mode == 2) { //Setting brightness of the blue LED
    temp = analogRead(rotationPin);
    brightB = map(temp, 0, 1023, 0, 255);
    Serial.println("B:" + brightB);
    analogWrite(RGBBluePin, brightB);
    delay(100);
  }
  
/*
   //Fade in and fade out red.
  for (int x = 0; x <= 255; x++) {
    analogWrite(RGBRedPin, x);
    delay(fadeDelay);
  }
  for (int x = 255; x >= 0; x--) {
    analogWrite(RGBRedPin, x);
    delay(fadeDelay);
  }

  //Fade in and fade out green.
  for (int x = 0; x <= 255; x++) {
    analogWrite(RGBGreenPin, x);
    delay(fadeDelay);
  }
  for (int x = 255; x >= 0; x--) {
    analogWrite(RGBGreenPin, x);
    delay(fadeDelay);
  }

  //Fade in and fade out blue.
  for (int x = 0; x <= 255; x++) {
    analogWrite(RGBBluePin, x);
    delay(fadeDelay);
  }
  for (int x = 255; x >= 0; x--) {
    analogWrite(RGBBluePin, x);
    delay(fadeDelay);
  }
  
  //Fade in and fade out red and blue.
  for (int x = 0; x <= 255; x++) {
    analogWrite(RGBRedPin, x);
    analogWrite(RGBBluePin, x);
    delay(fadeDelay);
  }
  for (int x = 255; x >= 0; x--) {
    analogWrite(RGBRedPin, x);
    analogWrite(RGBBluePin, x);
    delay(fadeDelay);
  }

  //Fade in and fade out red and green.
  for (int x = 0; x <= 255; x++) {
    analogWrite(RGBRedPin, x);
    analogWrite(RGBGreenPin, x);
    delay(fadeDelay);
  }
  for (int x = 255; x >= 0; x--) {
    analogWrite(RGBRedPin, x);
    analogWrite(RGBGreenPin, x);
    delay(fadeDelay);
  }

  //Fade in and fade out green and blue.
  for (int x = 0; x <= 255; x++) {
    analogWrite(RGBGreenPin, x);
    analogWrite(RGBBluePin, x);
    delay(fadeDelay);
  }
  for (int x = 255; x >= 0; x--) {
    analogWrite(RGBGreenPin, x);
    analogWrite(RGBBluePin, x);
    delay(fadeDelay);
  }
  
  //Fade in and fade out red, green and blue.
  for (int x = 0; x <= 255; x++) {
    analogWrite(RGBRedPin, x);
    analogWrite(RGBGreenPin, x);
    analogWrite(RGBBluePin, x);
    delay(fadeDelay);
  }
  for (int x = 255; x >= 0; x--) {
    analogWrite(RGBRedPin, x);
    analogWrite(RGBGreenPin, x);
    analogWrite(RGBBluePin, x);
    delay(fadeDelay);
  }
 */
}
