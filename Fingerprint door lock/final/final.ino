/**
 * Author: Yu-Hsuan Huang
 * version 1.0.0 -> keypad input
 */

#include <Keypad.h>
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

//Define address for the Serial LCD display
#define I2C_ADDR  0x3f //or 0x27
#define BACKLIGHT_PIN  3

//Initialise the Serial LCD.
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS] = {4, 5, 6, 7}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {10, 11, 12}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);

  //lcd setup
  lcd.begin (16,2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Enter password...");
  lcd.setCursor(0, 1);
  
}

void loop(){
  char key = keypad.getKey();

  if (key != NO_KEY) {
    Serial.println(key);
    lcd.print(key);
  }

  if(key == '#') {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Enter password...");
    lcd.setCursor(0, 1);
  }
}
