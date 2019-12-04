#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic
{
  public:
    Ultrasonic(int trigPin, int echoPin);
    boolean detectedObstacle(int maxObstacleDistance); //detect if there is an obstacle in front
    int getTrigPin(), getEchoPin();
    
  private:
    //Ultrasonic Pins:
    int TRIG_PIN, ECHO_PIN;
    int duration;
    int distance;
};

#endif
