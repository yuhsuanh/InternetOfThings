/*
        Author: Yu-Hsuan Huang
        Date: 2020/02/13
        
        Title: 321Maker Experiment #008 - Buzzer
        Description: This program will turn on the buzzer when the SW1 button is pressed. 
        Tutorial:  http://321maker.com/e/buzzer
        Revision Date: January 15, 2016
        Licence: http://321maker.mit-license.org/
        Requirements:  Arduino with 321Maker Shield
*/
#include "pitches.h";

int buzzerPin  = 5 ;  //The buzzerPin is connected to pin 5 of the Arduino.
int button1Pin = 2;   //The SW1 button is connect to pin 2 of the Arduino.
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.

void setup() { //The Setup function runs once.
  Serial.begin(9600);
  randomSeed(analogRead(0));  //Setup the Random Seed
  
  pinMode(buzzerPin, OUTPUT);  //Setup red LED pin as an output pin.
  pinMode(button1Pin, INPUT);  //Setup button1 pin as an input pin.

  //Setup RGB LED Light 
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
}

void loop() { //The loop function runs forever.
  if (digitalRead(button1Pin) == LOW) { //Check to see if button1 is pressed.
      //level1
//    tone(buzzerPin, 2000,50);           //Play a tone of 2000Hz for 50 milliseconds.

      //level2
//    int freq[] = {NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_B4, NOTE_B4};
//    int dura[] = {408, 408, 408, 408, 408, 408, 408};
//    int arrayLength = sizeof(freq) / sizeof(freq[0]);
//    for (int i=0; i<arrayLength; i++) {
//      Serial.println(freq[i], dura[i]);
//      tone(buzzerPin, freq[i],dura[i]);
//      delay(dura[i]+20);
//    }


      //level2
//    tone(buzzerPin, NOTE_B4,408);
//    delay(408);
//    tone(buzzerPin, NOTE_A4,408);
//    delay(408);
//    tone(buzzerPin, NOTE_G4,408);
//    delay(408);
//    tone(buzzerPin, NOTE_A4,408);
//    delay(408);
//    tone(buzzerPin, NOTE_B4,408);
//    delay(408);
//    tone(buzzerPin, NOTE_B4,408);
//    delay(408);
//    tone(buzzerPin, NOTE_B4,408);


    

/*
    //level3
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_F4, 700);
    delay(700);
    tone(buzzerPin, NOTE_E4, 408);
    delay(408);
    tone(buzzerPin, NOTE_D4, 1000);
    delay(1000);
    
    delay(500);
    
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_F4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 1000);
    delay(1000);

    delay(500);

    tone(buzzerPin, NOTE_A3, 600);
    delay(610);
    tone(buzzerPin, NOTE_C4, 1000);
    delay(1010);
    tone(buzzerPin, NOTE_A3, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 600);
    delay(610);
    tone(buzzerPin, NOTE_D4, 1000);
    delay(1000);
    
    delay(500);

    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_F4, 408);
    delay(410);
    tone(buzzerPin, NOTE_G4, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 1000);
    delay(1000);

    delay(500);

    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_F4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 1000);
    delay(1000);
    
    delay(500);

    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_C4, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_F4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 1000);
    delay(1000);
    
    delay(500);

    tone(buzzerPin, NOTE_A3, 600);
    delay(610);
    tone(buzzerPin, NOTE_C4, 600);
    delay(610);
    tone(buzzerPin, NOTE_A3, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_E4, 408);
    delay(410);
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_C4, 700);
    delay(700);
    
    delay(500);
    
    tone(buzzerPin, NOTE_C4, 600);
    delay(610);
    tone(buzzerPin, NOTE_C4, 470);
    delay(480);
    tone(buzzerPin, NOTE_D4, 408);
    delay(410);
    tone(buzzerPin, NOTE_C4, 408);
    delay(410);
    tone(buzzerPin, NOTE_B3, 408);
    delay(410);
    tone(buzzerPin, NOTE_C4, 1000);
    delay(1000);
    
    delay(500);
    
    tone(buzzerPin, NOTE_A4,408);
    delay(410);
    tone(buzzerPin, NOTE_AS4,408);
    delay(410);
    tone(buzzerPin, NOTE_A4,408);
    delay(410);
    tone(buzzerPin, NOTE_A4,408);
    delay(410);
    tone(buzzerPin, NOTE_G4,408);
    delay(410);
    tone(buzzerPin, NOTE_F4,408);
    delay(410);
    tone(buzzerPin, NOTE_G4,470);
    delay(480);
    tone(buzzerPin, NOTE_C4,1000);
    delay(1000);
*/

    //level4
    int freq[] = {NOTE_E4,NOTE_E4,NOTE_E4,NOTE_F4,NOTE_E4,NOTE_D4,0,NOTE_D4,NOTE_D4,NOTE_D4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_E4,0,NOTE_A3,NOTE_C4,NOTE_A3,NOTE_E4,NOTE_D4,0,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_D4,0,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_E4,NOTE_F4,NOTE_E4,NOTE_D4,0,NOTE_D4,NOTE_C4,NOTE_D4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_E4,0,NOTE_A3,NOTE_C4,NOTE_A3,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_C4,0,NOTE_C4,NOTE_C4,NOTE_D4,NOTE_C4,NOTE_B3,NOTE_C4,0};
    int dura[] = {408,408,408,700,408,1000,500,408,408,408,408,408,408,1000,500,600,1000,408,600,1000,500,408,408,408,408,408,408,1000,500,408,408,408,408,408,408,1000,500,408,408,408,408,408,408,1000,500,600,600,408,408,408,408,700,500,600,470,408,408,408,1500,500};
    int arrayLength = sizeof(freq) / sizeof(freq[0]); //get array length
    for (int i=0; i<arrayLength; i++) {
      if(freq[i] != 0) {
        randomRGBLedLight();
        tone(buzzerPin, freq[i], dura[i]);
        delay(dura[i]+20);
      } else {
        setRGBLedLight(0,0,0);
        noTone(buzzerPin);
        delay(dura[i]);
      }
    }
    
  } 
}

//Set the RGB Light randomly
void randomRGBLedLight() {
  //Light Red
  int x = random(0, 255);
  analogWrite(RGBRedPin, x);
  //Light Green
  x = random(0, 255);
  analogWrite(RGBGreenPin, x);
  //Light Blue
  x = random(0, 255);
  analogWrite(RGBBluePin, x);
}

//Set the RGB LED Light manual
void setRGBLedLight(int x, int y, int z) {
  analogWrite(RGBRedPin, x);
  analogWrite(RGBGreenPin, y);
  analogWrite(RGBBluePin, z);
  
}
