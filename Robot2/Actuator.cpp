#include "Arduino.h"
#include "Actuator.h"

Actuator::Actuator(int forwardsRelayPin, int backwardsRelayPin)
{
  // put your setup code here, to run once:
  pinMode(forwardsRelayPin,OUTPUT);
  pinMode(backwardsRelayPin,OUTPUT);
  FORWARDS_RELAY_PIN = forwardsRelayPin;
  BACKWARDS_RELAY_PIN = backwardsRelayPin;
}

int Actuator::getForwardsPin(){
  return FORWARDS_RELAY_PIN;
}

int Actuator::getBackwardsPin(){
  return BACKWARDS_RELAY_PIN;
}

void Actuator::extend() {
    digitalWrite(FORWARDS_RELAY_PIN, HIGH);
    digitalWrite(BACKWARDS_RELAY_PIN, LOW);
}

void Actuator::retract() {
    digitalWrite(FORWARDS_RELAY_PIN, LOW);
    digitalWrite(BACKWARDS_RELAY_PIN, HIGH);
}

void Actuator::brake() {
    digitalWrite(FORWARDS_RELAY_PIN, LOW);
    digitalWrite(BACKWARDS_RELAY_PIN, LOW);
}
