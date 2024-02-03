#include <Arduino.h>

#include <configs.hpp>
#include <debug.hpp>
#include <hardware_interface.hpp>
void debug::motor_test(){
    HW_API::forward();
    delay(1000);
    HW_API::emerg_stop();
    delay(1000);
    HW_API::turn_left();
    delay(1000);
    HW_API::emerg_stop();
    delay(1000);
    HW_API::turn_right();
    delay(1000);
    HW_API::emerg_stop();
    delay(999999);
}

void debug::sensor_test(){

}

void debug::correct_direction_test(){
    HW_API::forward();
    delay(500);
}