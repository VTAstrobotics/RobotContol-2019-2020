#include "Arduino.h"
#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(int trigPin, int echoPin){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  TRIG_PIN = trigPin;
  ECHO_PIN = echoPin;
}

int Ultrasonic::getTrigPin(){
  return TRIG_PIN;
}

int Ultrasonic::getEchoPin(){
  return ECHO_PIN;
}

boolean Ultrasonic::detectedObstacle(int maxObstacleDistance){
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN,LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = duration*0.034/2;
  return distance<=maxObstacleDistance;
}
