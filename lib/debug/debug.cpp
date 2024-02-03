#include <debug.hpp>
#include <hardware_interface.hpp>
void debug::motor_test(){
    HW_API::forward();
    delay(1000);
    
}