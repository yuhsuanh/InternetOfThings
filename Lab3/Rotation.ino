/*    
        Author: Yu-Hsuan Huang
        Title: 321Maker Experiment #003 - Rotation Sensor
        Description: This program will read the data from the rotation sensor and display the result to the serial monitor.
        Tutorial:  http://321maker.com/e/rotation-sensor
        Revision Date: March 15, 2016
        Licence: http://321maker.mit-license.org/
        Requirements:  Arduino with 321Maker Shield
        Instructions: Click Tools, Serial Montior (Ctrl + Shift + M) to view the output.
*/
int rotationPin = A0; //The rotation sensor is plugged into pin A0 of the Arduino.
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.

int data=0;           //Used to store data from sensor.

void setup() { //The Setup function runs once.
  pinMode(RGBRedPin, OUTPUT);    //Setup red RGB LED pin as an output pin.
  pinMode(RGBGreenPin, OUTPUT);  //Setup green RGB LED pin as an output pin.
  pinMode(RGBBluePin, OUTPUT);   //Setup blue RGB LED pin as an output pin.
  
  Serial.begin(9600); //This will enable the Arduino to send data to the Serial monitor.
}

void loop() { //The loop function runs forever.
  data = analogRead(rotationPin);  //Read the value from the light sensor and store it in the lightData variable.
  Serial.print("Volume ="); 
  Serial.println(data/4);  //Print the data to the serial port.

//  map(data,0,255,100,1000);

//  data = ++data * 10;
//  Serial.println(data);
//  delay(1000);
  
  //LED RGB Light control: following Red, Green, Blue
  digitalWrite(RGBRedPin, HIGH);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBGreenPin, LOW);
  delay(data);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBBluePin, LOW);
  digitalWrite(RGBGreenPin, HIGH);
  delay(data);
  digitalWrite(RGBRedPin, LOW);
  digitalWrite(RGBBluePin, HIGH);
  digitalWrite(RGBGreenPin, LOW);
  delay(data);

  delay(100);
//  delay(1000);           //Wait 1 second (1000mS) before running again. 
}
