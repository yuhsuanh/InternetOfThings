/*
Author: Yu-Hsuan Huang

Title: Arduino Experiment #013 - PIR Motion Sensor
Description: Use PIR motion sensor to detect human movementUse PIR motion sensor to detect human movement 
Revision Date: June 27, 2020 
*/

const int pir = 7;
const int led =  13; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pir, INPUT);     
  pinMode(led, OUTPUT);   
}

void loop() {
  // put your main code here, to run repeatedly:
  byte p = digitalRead(pir);
  if (p == HIGH) {     
    digitalWrite(led, HIGH); 
    Serial.println("Detected");
  } 
  else {
    digitalWrite(led, LOW); 
    Serial.println("No One");
  }
  delay(300);
}
