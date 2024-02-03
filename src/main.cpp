#include <Arduino.h>

#include <configs.hpp>
#include <hardware_interface.hpp>
#include <track_line.hpp>

void setup() {
  // put your setup code here, to run once:
  G::init();
}

void loop() {
  // put your main code here, to run repeatedly:
  Track_Line::run();
}
