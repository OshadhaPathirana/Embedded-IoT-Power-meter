//
//   SDL_Arduino_INA3221 Library Test Code
//   SDL_Arduino_INA3221.cpp Arduino code - runs in continuous mode
#include <Wire.h>
#include <SDL_Arduino_INA3221.h>

SDL_Arduino_INA3221 ina3221;

// the three channels of the INA3221 named for SunAirPlus Solar Power Controller channels (www.switchdoc.com)
#define CHANNEL_1 1
#define CHANNEL_2 2
#define CHANNEL_3 3

#include <Servo.h>
Servo ESC;     // create servo object to control the ESC

void setup(void)
{

  Serial.begin(57600);
  ESC.attach(2);
  Serial.println("SDA_Arduino_INA3221_Test");
  Serial.println("Measuring current with ina3221 ...");
  ina3221.begin();
  pinMode(0, OUTPUT);
}

void loop(void)
{
  ESC.writeMicroseconds(1500);    // Send the signal to the ESC
  
  analogWrite(0,150);
  float current_mA1 = 0;
  current_mA1 = ina3221.getCurrent_mA(CHANNEL_1);
  Serial.print("Current 1:       "); Serial.print(current_mA1); //Serial.println(" mA");
  Serial.println("");

  float current_mA2 = 0;
  current_mA2 = -ina3221.getCurrent_mA(CHANNEL_2);
  Serial.print("Current 2:       "); Serial.print(current_mA2); //Serial.println(" mA");
  Serial.println("");

  float current_mA3 = 0;
  current_mA3 = ina3221.getCurrent_mA(CHANNEL_3);
  Serial.print("Current 3:       "); Serial.print(current_mA3); //Serial.println(" mA");
  Serial.println("");

  delay(100);
}
