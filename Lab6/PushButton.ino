/*
        Author: Yu-Hsuan Huang
        Title: 321Maker Experiment #006 - Button
        Description: This program will turn on the blue LED when SW1 is pressed and the red LED when SW2 button is pressed.
        Tutorial:  http://321maker.com/e/button
        Revision Date: January 15, 2016
        Licence: http://321maker.mit-license.org/
        Requirements:  Arduino with 321Maker Shield
*/

int button1Pin = 2;
int button2Pin = 3;
int redLedPin = 9;
int greenLedPin = 10;
int blueLedPin = 11;

boolean isBlink = false;
int delayTime = 500;

void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);

  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

void loop() {
  //judge start
  if(digitalRead(button1Pin) == LOW) { 
    isBlink = true;
  }
  
  //LED Red
  if(isBlink) { 
    digitalWrite(redLedPin, HIGH);
    delay(delayTime);
    digitalWrite(redLedPin, LOW);
  }

  //judge stop or not
  if(digitalRead(button2Pin) == LOW) { 
    isBlink = false;
  }

  //LED Blue
  if(isBlink) { 
    digitalWrite(blueLedPin, HIGH);
    delay(delayTime);
    digitalWrite(blueLedPin, LOW);
  }

  //judge stop or not
  if(digitalRead(button2Pin) == LOW) { 
    isBlink = false;
  }

  //LED Green
  if(isBlink) { 
    digitalWrite(greenLedPin, HIGH);
    delay(delayTime);
    digitalWrite(greenLedPin, LOW);
  }

  //judge stop or not
  if(digitalRead(button2Pin) == LOW) { 
    isBlink = false;
  }
  
}
