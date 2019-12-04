#ifndef Beacon_h
#define Beacon_h

#include "Arduino.h"

class Beacon
{
  public:
    Beacon(int northPin, int southPin, int eastPin, int westPin);
    void senseDir(); // read direction value
    int detectStrongestDir(); // choose which direction is the other beacon
    // Direction Pins Getters:
    int getNorthPin(), getSouthPin(), getEastPin(), getWestPin();

    // Direction Values Getters:
    int getNorthVal(), getSouthVal(), getWestVal(), getEastVal();
    
  private:
    //Direction Pins:
    int NORTH_PIN, SOUTH_PIN, EAST_PIN, WEST_PIN; 
    // Direction Values:
    int _northVal, _southVal, _eastVal, _westVal;
};

#endif
