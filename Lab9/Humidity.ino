/*
        Author: Yu-Hsuan Huang
        
        Title: 321Maker Experiment #009 - Humidity
        Description: This program will monitior the humidity and temperature from the DHT11 sensor and display it in the serial monitor.
        Tutorial:  http://321maker.com/e/humidity
        Revision Date: January 15, 2016
        Licence: http://321maker.mit-license.org/
        Requirements:  Arduino with 321Maker Shield
        DHT sensor library: https://github.com/adafruit/DHT-sensor-library/archive/master.zip
*/

#include "DHT.h"
int DHT11Pin = 4;        //The DHT11 sensor  is connected to pin 4 of the Arduino. 
int waitTime = 1000;     //The amount of time to wait between sensor reads.
DHT dht(DHT11Pin, DHT11);//Initialize the sensor. 

int rotationPin = A0; //The rotation sensor is plugged into pin A0 of the Arduino.

int buzzerPin  = 5 ;  //The buzzerPin is connected to pin 5 of the Arduino.
int RGBRedPin = 9;    //The red RGB LED is connected pin 9 of the Arduino.
int RGBGreenPin = 10; //The green RGB LED is connected pin 10 of the Arduino.
int RGBBluePin = 11;  //The blue RGB LED is connected pin 11 of the Arduino.
int redLedPin = 12;   //The red LED is connected pin 12 of the Arduino.
int blueLedPin = 13;  //The blue LED is connected pin 13 of the Arduino.


void setup(){
  dht.begin();  //Start the sensor.

  pinMode(buzzerPin, OUTPUT);
  pinMode(RGBRedPin, OUTPUT);
  pinMode(RGBGreenPin, OUTPUT);
  pinMode(RGBBluePin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

void loop()
{
  delay(waitTime);
  int myHumidity = analogRead(rotationPin); 
  float humidity = dht.readHumidity();  //Read the humidity value from the sensor.
  float celsius = dht.readTemperature(); //Read the temperature (c) value from the sensor. 
  float fahrenheit = dht.readTemperature(true); //Read the temperature (f) value from the sensor.
  float heatIndexF = dht.computeHeatIndex(fahrenheit, humidity); //Calculate the heat index (f).
  float heatIndexC = dht.computeHeatIndex(celsius, humidity, false); //Calculate the heat index (c).

  myHumidity = map(myHumidity, 0, 1023, 0, 100);
  Serial.print("My humidity value: ");
  Serial.println(myHumidity);
  Serial.println("-----------------------------");
  
  Serial.print("Humidity   (%): ");
  Serial.println(humidity);        //Display the humidity precentage.
  Serial.print("Temperature(c): ");
  Serial.println(celsius);          //Display the temperature in celsius.
  Serial.print("Heat index (c): ");
  Serial.println(heatIndexC);       //Display the heat index in celsius.
  Serial.print("Temperature(f): ");
  Serial.println(fahrenheit);       //Display the temperature in fahrenheit.
  Serial.print("Heat index (f): ");
  Serial.println(heatIndexF);       //Display the heat index in fahrenheit.
  Serial.print("Dewpoint:");
  Serial.println(dewPoint(celsius,humidity));
  Serial.println("");

  // celsius >= 25 or not
  celsiusLED(celsius);

  // humidity >= 50 or not
  humidityLED(humidity);

  // humidity > myHumidity or not
  compareHumidity(humidity, myHumidity);
}

void celsiusLED(double celsius) {
  digitalWrite(redLedPin, LOW);
  digitalWrite(blueLedPin, LOW);
  if(celsius>=25) {
    digitalWrite(redLedPin, HIGH);
  } else {
    digitalWrite(blueLedPin, HIGH);
  }
}

void humidityLED(double humidity) {
  digitalWrite(RGBGreenPin, LOW);
  digitalWrite(RGBBluePin, LOW);
  if(humidity >= 50) {
    digitalWrite(RGBGreenPin, HIGH);
  } else {
    digitalWrite(RGBBluePin, HIGH);
  }
}

void compareHumidity(double humidity, int myHumidity) {
  if(humidity > myHumidity) {
    tone(buzzerPin, 2000,50);
  } else {
    noTone(buzzerPin);
  }
}

double dewPoint(double celsius, double humidity)
{
 double a = 17.271;
 double b = 237.7;
 double temp = (a * celsius) / (b + celsius) + log(humidity*0.01);
 double dP = (b * temp) / (a - temp);
 return dP;
}
