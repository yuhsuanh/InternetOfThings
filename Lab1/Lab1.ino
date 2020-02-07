  /*      Stu#: 200443723
   *      Name: Yu-Hsuan Huang
   *      Date: January 9th
   *      
   *      Title: 321Maker Experiment #001 - Blue Blink
   *      Description: This program will blink the Blue LED on the 321Maker shield.
   *      Tutorial:  http://321maker.com/e/blue-blink   
   *      Revision Date: January 15, 2016
   *      Licence: http://321maker.mit-license.org/
   *      Requirements:  Arduino with 321Maker Shield
   */

int startButtonPin = 2;  //The SW1 button is connected pin 2 of the Arduino.
int stopButtonPin = 3;   //The SW2 button is connected pin 3 of the Arduino.
int redLedPin = 12;   //The red LED is connected pin 12 of the Arduino.
int blueLedPin = 13;  //The blue LED is connected pin 13 of the Arduino.

int onTime = 2000;    //This is the number of milliseconds the LED will be on for. 
int offTime = 500;    //This is the number of milliseconds the LED will be off for. 

int thousandMillisecondTime =1000;
int hundredMillisecond = 100;

int startButtonState = 0;
int stopButtonState = 0;
int nowState = 0;

void setup() { //The Setup function runs once.
  pinMode(startButtonPin, INPUT);  //Setup SW1 button pin as a input pin.
  pinMode(stopButtonPin, INPUT);   //Setup SW2 button pin as a input pin.
  
  pinMode(redLedPin, OUTPUT);   //Setup Red LED pin as an output pin.
  pinMode(blueLedPin, OUTPUT);  //Setup Blue LED pin as an output pin.
}

void loop() { //The loop function runs forever.

//  //Level 1
//  digitalWrite(blueLedPin, HIGH);  //Turn on the blue LED.
//  delay(onTime);                   //Wait onTime.
//  digitalWrite(blueLedPin, LOW);   //Turn off the blue LED.
//  delay(offTime);                  //Wait offTime.
//
//  //Level 2-1
//  digitalWrite(blueLedPin, HIGH);
//  delay(50);
//  digitalWrite(blueLedPin, LOW);
//  delay(950);
//  //Level 2-2
//  digitalWrite(blueLedPin, HIGH);
//  delay(1000);
//  digitalWrite(blueLedPin, LOW);
//  delay(3000);
//  //Level 2-3
//  digitalWrite(blueLedPin, HIGH);
//  delay(100);
//  digitalWrite(blueLedPin, LOW);
//  delay(100);
//
//  //Level 3-1
//  //slow 3 times
//  digitalWrite(blueLedPin, HIGH);
//  delay(thousandMillisecondTime);
//  digitalWrite(blueLedPin, LOW);
//  delay(thousandMillisecondTime);
//  digitalWrite(blueLedPin, HIGH);
//  delay(thousandMillisecondTime);
//  digitalWrite(blueLedPin, LOW);
//  delay(thousandMillisecondTime);
//  digitalWrite(blueLedPin, HIGH);
//  delay(thousandMillisecondTime);
//  digitalWrite(blueLedPin, LOW);
//  delay(thousandMillisecondTime);
//  //fast 3 times
//  digitalWrite(blueLedPin, HIGH);
//  delay(hundredMillisecond);
//  digitalWrite(blueLedPin, LOW);
//  delay(hundredMillisecond);
//  digitalWrite(blueLedPin, HIGH);
//  delay(hundredMillisecond);
//  digitalWrite(blueLedPin, LOW);
//  delay(hundredMillisecond);
//  digitalWrite(blueLedPin, HIGH);
//  delay(hundredMillisecond);
//  digitalWrite(blueLedPin, LOW);
//  delay(hundredMillisecond);
//
//  //Level 3-2
  //Name: Yu-Hsuan Huang
  //First Name First Letter : Y
  digitalWrite(blueLedPin, HIGH);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, LOW);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, HIGH);
  delay(hundredMillisecond);
  digitalWrite(blueLedPin, LOW);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, HIGH);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, LOW);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, HIGH);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, LOW);
  delay(2000);    //Delay two seconds between two word
  //Last Name First Letter : H
  digitalWrite(blueLedPin, HIGH);
  delay(hundredMillisecond);
  digitalWrite(blueLedPin, LOW);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, HIGH);
  delay(hundredMillisecond);
  digitalWrite(blueLedPin, LOW);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, HIGH);
  delay(hundredMillisecond);
  digitalWrite(blueLedPin, LOW);
  delay(thousandMillisecondTime);
  digitalWrite(blueLedPin, HIGH);
  delay(hundredMillisecond);
  digitalWrite(blueLedPin, LOW);
  delay(2000);    //Delay two seconds between two word
//
//  //Level 4-1
//  startButtonState = digitalRead(startButtonPin); //Get SW1 button state
//  stopButtonState = digitalRead(stopButtonPin);   //Get SW2 button state
//  if(startButtonState == LOW) { //SW1 button is clicked
//    nowState = 1;
//  }
//  if(stopButtonState == LOW) {  //SW2 button is clicked
//    nowState = 0;
//  }
//
//  if(nowState == 1) { //if SW1 button was clicked: start strobling
//    digitalWrite(blueLedPin, HIGH);
//    delay(hundredMillisecond);
//    digitalWrite(blueLedPin, LOW);
//    delay(hundredMillisecond);
//  }
//
//  //Level 4-2
//  digitalWrite(blueLedPin, HIGH);
//  delay(hundredMillisecond);
//  digitalWrite(blueLedPin, LOW);
//  delay(hundredMillisecond);
//  digitalWrite(redLedPin, HIGH);
//  delay(hundredMillisecond);
//  digitalWrite(redLedPin, LOW);
//  delay(hundredMillisecond);

}
