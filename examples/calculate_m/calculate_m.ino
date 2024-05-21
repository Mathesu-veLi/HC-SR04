#include <HC_SR04.h>

#define PIN_TRIGGER 2
#define PIN_ECHO 3

HC_SR04 sensor(PIN_TRIGGER, PIN_ECHO);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance in m: ");
  Serial.print(sensor.m_distance());
  Serial.println("m");

  delay(1000);
}
