#include "Arduino.h"
#include "Beacon.h"

Beacon::Beacon(int northPin, int southPin, int eastPin, int westPin)
{
  pinMode(northPin, INPUT);
  pinMode(southPin, INPUT);
  pinMode(eastPin, INPUT);
  pinMode(westPin, INPUT);
  NORTH_PIN = northPin;
  SOUTH_PIN = southPin;
  EAST_PIN = eastPin;
  WEST_PIN = westPin;
}

// Direction Pins getters:
int Beacon::getNorthPin(){
  return NORTH_PIN;
}

int Beacon::getSouthPin(){
  return SOUTH_PIN;
}

int Beacon::getEastPin(){
  return EAST_PIN;
}

int Beacon::getWestPin(){
  return WEST_PIN;
}

// Direction Values getters:
int Beacon::getNorthVal(){
  return _northVal;
}

int Beacon::getSouthVal(){
  return _southVal;
}

int Beacon::getWestVal(){
  return _westVal;
}
int Beacon::getEastVal(){
  return _eastVal;
}

// Read Data from Chip:
void Beacon::senseDir() {
 _northVal = digitalRead(NORTH_PIN);
 _southVal = digitalRead(SOUTH_PIN);
 _eastVal = digitalRead(EAST_PIN);
 _westVal = digitalRead(WEST_PIN);
}

// Detect Chip Strongest Direction:
int Beacon::detectStrongestDir() {
  //return the strongest direction pin
 if (_northVal == 0) {
  return NORTH_PIN;
 }
 if (_southVal == 0) {
  return SOUTH_PIN;
 }
 if (_eastVal == 0) {
  return EAST_PIN;
 }
 if (_westVal == 0) {
  return WEST_PIN;
 }
}
