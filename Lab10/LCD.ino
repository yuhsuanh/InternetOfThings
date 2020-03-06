/*
Author: Yu-Hsuan Huang

Title: 321Maker Experiment #011 - LCD
Description: This program will display 321Maker on the serial LCD.
Tutorial:  http://321maker.com/e/011-lcd
Revision Date: October 12, 2016
Licence: http://321maker.mit-license.org/
Requirements:  Arduino with 321Maker Shield, 1602 Serial LCD 
Serial LCD library: https://bitbucket.org/fmalpartida/new-liquidcrystal/downloads/NewliquidCrystal_1.3.4.zip      
*/
//Load libraries
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

//Define address for the Serial LCD display.
#define I2C_ADDR  0x27  //If 0x3f doesn't work change this to 0x27
#define BACKLIGHT_PIN  3

//Pin variables
int lightPin = A1; //The light sensor is plugged into pin A1 of the Arduino.
int button1Pin = 2;   //The SW1 button is connect to pin 2 of the Arduino.
int button2Pin = 3;   //The SW2 button is connect to pin 3 of the Arduino.
int DHT11Pin = 4;        //The DHT11 sensor  is connected to pin 4 of the Arduino.

//Initialise the Serial LCD, humidity sensor
LiquidCrystal_I2C lcd(I2C_ADDR, 2,1,0,4,5,6,7); //These pin numbers are hard coded in on the serial backpack board.
DHT dht(DHT11Pin, DHT11);
 

//Global variables
int option = 0;
int oldOption = -1;
int button2_option = 0;

void setup() {
  lcd.begin (16,2);     //Initalize the LCD.
  dht.begin();          //Initalize the DHT.

  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
//  lcd.noBacklight(); 
  
  lcd.setBacklightPin(3,POSITIVE);//Setup the backlight.
//  lcd.setBacklight(HIGH); //Switch on the backlight.
  lcd.setBacklight(50); //From 0-255
  lcd.clear();
}

void loop(){
//  lcd.clear();
  
//  lcd.setCursor(0,0);
//  lcd.print("Your Name Here");
//
//  lcd.setCursor(0,1);
//  lcd.print("3");
//  delay(1000);
//  lcd.print("2");
//  delay(1000);
//  lcd.print("1");
//  delay(1000);
//  lcd.print(" Maker");

  if (digitalRead(button2Pin) == LOW) {
    button2_option = ++button2_option % 3;
    resetOption();
    lcd.clear();
  }

  switch(button2_option) {
    case 0:
      showMyInfo();
      break;
    case 1:
      showScroll();
      break;
    case 2:
      showEnvironmentInfo();
      break;
  }
//  showMyInfo();
//  showScroll();
//  showEnvironmentInfo();
}

void resetOption() {
  option = 0;
  oldOption = -1;
}

void showMyInfo() {
   //Level 3-1
  if (digitalRead(button1Pin) == LOW) {
    option = ++option % 3;
    lcd.clear();
  }

  if(oldOption != option) {
    switch(option) {
      case 0:
        lcd.setCursor(0,0);
        lcd.print("Yu-Hsuan Huang");
        break;
      case 1:
        lcd.setCursor(0,0);
        lcd.print("Photography");
        break;
      case 2:
        lcd.setCursor(0,0);
        lcd.print("Hamburger");
        break;
    }
    oldOption = option;
    delay(300);
  }
}

void showScroll() {
  //Level 3-2
  String name = "Yu-Hsuan Huang";
  for(int i=15; i>=0; i--) {
    lcd.clear();
    lcd.setCursor(i, 0);
    lcd.print(name);
    delay(250);
  }
  for(int j=1; j<14; j++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(name.substring(j));
    delay(250);
  }
}

void showEnvironmentInfo() {
  //Level 4
  if (digitalRead(button1Pin) == LOW) {
    option = ++option % 3;
    lcd.clear();
  }
  
  if(oldOption != option) {
    float humidity = dht.readHumidity();  //Read the humidity value from the sensor.
    float celsius = dht.readTemperature(); //Read the temperature (c) value from the sensor.
    int lightValus = analogRead(lightPin); //Read the value from the light sensor and store it in the lightData variable.
    switch(option) {
      case 0:
        lcd.setCursor(0,0);
        lcd.print("Humidity:");
        lcd.setCursor(0,1);
        lcd.print(humidity);
        break;
      case 1:
        lcd.setCursor(0,0);
        lcd.print("Celsius:");
        lcd.setCursor(0,1);
        lcd.print(celsius);
        break;
      case 2:
        lcd.setCursor(0,0);
        lcd.print("Light:");
        lcd.setCursor(0,1);
        lcd.print(lightValus);
        break;
    }
    oldOption = option;
    delay(300);
  }
}
