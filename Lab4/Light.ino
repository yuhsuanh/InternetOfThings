/*
        Author: Yu-Hsuan Huang
        Title: 321Maker Experiment #004 - Light Sensor
        Description: This program will read the data from the light sensor and display the result to the serial monitor.
        Tutorial:  http://321maker.com/e/light-sensor
        Revision Date: March 15, 2016
        Licence: http://321maker.mit-license.org/
        Requirements:  Arduino with 321Maker Shield
        Instructions: Click Tools, Serial Montior (Ctrl + Shift + M) to view the output.
*/
int lightPin = A1; //The light sensor is plugged into pin A1 of the Arduino.
int redLedPin = 12;   //The red LED is connected pin 12 of the Arduino.
int blueLedPin = 13;  //The blue LED is connected pin 13 of the Arduino.

int data = 0;      //This will store the data from the sensor.

void setup() { //The Setup function runs once.
  pinMode(redLedPin, OUTPUT);   //Setup Red LED pin as an output pin.
  pinMode(blueLedPin, OUTPUT);  //Setup Blue LED pin as an output pin.
  
  Serial.begin(9600);
}

void loop() { //The loop function runs forever.
  data = analogRead(lightPin); //Read the value from the light sensor and store it in the lightData variable.
  data = map(data,0,1023,0,100);
  
  Serial.print("Light value =");
  Serial.println(data);  //Print the data to the serial port.
//  delay(1000);           //Wait 1 second (1000mS) before running again.

  if(data < 30 ) {
    digitalWrite(blueLedPin, HIGH);
    digitalWrite(redLedPin, HIGH);
  } else {
    digitalWrite(blueLedPin, LOW);
    digitalWrite(redLedPin, LOW);
  }
  
}
