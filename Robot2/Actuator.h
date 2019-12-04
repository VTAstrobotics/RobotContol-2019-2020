#ifndef Actuator_h
#define Actuator_h

#include "Arduino.h"

class Actuator
{
  public:
    Actuator(int forwardsRelayPin, int backwardsRelayPin);
    void extend(), retract(), brake();
    int getForwardsPin(), getBackwardsPin();
    
   private:
    int FORWARDS_RELAY_PIN, BACKWARDS_RELAY_PIN;
};
#endif
