/**
 * Author: Yu-Hsuan Huang
 * Date: 2020/03/19
 * 
 * Internet of Things - Arduino Lab12
 * 
 */

#include <Servo.h>

#define QUARTER_ANGLE 45 // 25% in 180 angle

Servo myservo;  // create servo object to control a servo

int button1Pin = 2;
int button2Pin = 3;
int motorPin = 7;
int RGBRedPin = 9;
int RGBGreenPin = 10;
int RGBBluePin = 11;

int option = 0;
int angle = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(motorPin);  // attaches the servo on pin 9 to the servo object
  //Button
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  //LED
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
}

void loop() {

  if(digitalRead(button1Pin) == LOW) {
    option = 1;
    delay(300);
  }
  if(digitalRead(button2Pin) == LOW) {
    option = -1;
    delay(300);
  }
  changeServoMotor(option);
  option = 0;
  
}

void changeServoMotor(int option) {
  angle = angle + (QUARTER_ANGLE * option);
  if(angle < 0) {
    angle = 180;
    gotoEnd();
    return;
  } else if ( angle > 180) {
    angle = 0;
    gotoStart();
    return;
  }
  displayLEDByAngle(angle);
  myservo.write(angle);
  Serial.println(angle);
}

void displayLEDByAngle(int angle) {
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  
  switch(angle) {
    case 0:
      digitalWrite(RGBRedPin, HIGH);
      break;
    case 45:
      digitalWrite(RGBRedPin, HIGH);
      digitalWrite(RGBGreenPin, HIGH);
      break;
    case 90:
      digitalWrite(RGBGreenPin, HIGH);
      break;
    case 135:
      digitalWrite(RGBBluePin, HIGH);
      digitalWrite(RGBGreenPin, HIGH);
      break;
    case 180:
      digitalWrite(RGBBluePin, HIGH);
      break;
  }
}

void gotoEnd() {
  for(int i=0; i<=180; i++) {
    myservo.write(i);
    if(i < 45) {
      digitalWrite(RGBRedPin, HIGH);
      digitalWrite(RGBBluePin, LOW);
      digitalWrite(RGBGreenPin, LOW);
    }else if (i < 90 && i >=45) {
      digitalWrite(RGBRedPin, HIGH);
      digitalWrite(RGBBluePin, LOW);
      digitalWrite(RGBGreenPin, HIGH);
    }else if (i < 135 && i>=90) {
      digitalWrite(RGBRedPin, LOW);
      digitalWrite(RGBBluePin, LOW);
      digitalWrite(RGBGreenPin, HIGH);
    }else if (i < 180 && i>=135) {
      digitalWrite(RGBRedPin, LOW);
      digitalWrite(RGBBluePin, HIGH);
      digitalWrite(RGBGreenPin, HIGH);
    }else {
      digitalWrite(RGBRedPin, LOW);
      digitalWrite(RGBBluePin, HIGH);
      digitalWrite(RGBGreenPin, LOW);
    }
    delay(3);
  }
}

void gotoStart() {
  for(int i=180; i>=0; i--) {
    myservo.write(i);
    if(i > 135) {
      digitalWrite(RGBRedPin, LOW);
      digitalWrite(RGBBluePin, HIGH);
      digitalWrite(RGBGreenPin, LOW);
    }else if (i > 90 && i <= 135) {
      digitalWrite(RGBRedPin, LOW);
      digitalWrite(RGBBluePin, HIGH);
      digitalWrite(RGBGreenPin, HIGH);
    }else if (i > 45 && i <= 90) {
      digitalWrite(RGBRedPin, LOW);
      digitalWrite(RGBBluePin, LOW);
      digitalWrite(RGBGreenPin, HIGH);
    }else if (i > 0 && i <= 45) {
      digitalWrite(RGBRedPin, HIGH);
      digitalWrite(RGBBluePin, LOW);
      digitalWrite(RGBGreenPin, HIGH);
    }else {
      digitalWrite(RGBRedPin, HIGH);
      digitalWrite(RGBBluePin, LOW);
      digitalWrite(RGBGreenPin, LOW);
    }
    delay(3);
  }
}
