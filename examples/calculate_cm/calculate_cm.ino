#include <HC_SR04.h>

#define PIN_TRIGGER 2
#define PIN_ECHO 3

HC_SR04 sensor(PIN_TRIGGER, PIN_ECHO);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance in cm: ");
  Serial.print(sensor.cm_distance());
  Serial.println("cm");

  delay(1000);
}
