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
int button1Pin = 2;    //The SW1 button is connect to pin 2 of the Arduino.
int button2Pin = 3;    //The SW2 button is connect to pin 3 of the Arduino.
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.

int fadeDelay = 5;    //This is the number of milliseconds that it will take between steps during fading.
int mode = -1;         //Mode 0 to 2. 0: red, 1: Green, 2: Blue

int temp = 0;    //temp data
int brightR = 0; //brightness of the red LED
int brightB = 0; //brightness of the blue LED

//The Setup function runs once.
void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
}

//The loop function runs forever.
void loop() {
  //Clicke Button1
  if (digitalRead(button1Pin) == LOW) {
    mode = 0;
    delay(300);
  }
  //Click Button2
  if (digitalRead(button2Pin) == LOW) {
    mode = 1;
    delay(300);
  }

  //Button1 has been clicked
  if(mode == 0) {
    //Fade in and fade out red.
    for (int x = 0; x <= 255; x++) {
      analogWrite(RGBRedPin, x);
      delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--) {
      analogWrite(RGBRedPin, x);
      delay(fadeDelay);
    }
  }

  //Button2 has been clicked
  if(mode == 1) {
    //Fade in and fade out blue.
    for (int x = 0; x <= 255; x++) {
      analogWrite(RGBBluePin, x);
      delay(fadeDelay);
    }
    for (int x = 255; x >= 0; x--) {
      analogWrite(RGBBluePin, x);
      delay(fadeDelay);
    }
  }
}
