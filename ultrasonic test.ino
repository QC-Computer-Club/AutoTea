#include <NewPing.h>

const int PIN_WATER_SENSOR_ECHO = 6;
const int PIN_WATER_SENSOR_TRIG = 13;
const int MAX_DIST_WATER_SENSOR = 20;

NewPing waterSensor(PIN_WATER_SENSOR_TRIG,
                    PIN_WATER_SENSOR_ECHO,
                    MAX_DIST_WATER_SENSOR);

int distanceToWater;

void setup() {
  Serial.begin(9600);
}

void loop() {
  distanceToWater = waterSensor.ping_cm();
  Serial.println(distanceToWater);
  delay(100);
}
