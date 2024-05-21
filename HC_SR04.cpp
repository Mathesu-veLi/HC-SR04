#include <Arduino.h>
#include <HC_SR04.h>

HC_SR04::HC_SR04(int pinTrigger, int pinEcho) {
  this -> pinTrigger = pinTrigger;
  this -> pinEcho = pinEcho;

  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
}

double HC_SR04::cm_distance() {
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);
  unsigned long microseconds = pulseIn(pinEcho, HIGH);

  double cm_distance = (microseconds * 0.0343) / 2.0;
  if (cm_distance != 0 && cm_distance < 400) {
    return cm_distance;
  }
  return -1.0;
}

double HC_SR04::m_distance() {
  double cm_distance = this -> cm_distance();

  if (cm_distance != -1.0) {
    return cm_distance / 100.0;
  }
  return cm_distance;
}
