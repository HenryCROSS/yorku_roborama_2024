#include <Arduino.h>

#include <common.hpp>
#include <hardware_interface.hpp>
#include <track_line.hpp>
#include <debug.hpp>

void setup() {
  // put your setup code here, to run once:
  G::init();
}

void loop() {
  // put your main code here, to run repeatedly:
  Track_Line::run();
  // debug::motor_test();
  // debug::correct_direction_test();
  // HW_API::forward();

}

