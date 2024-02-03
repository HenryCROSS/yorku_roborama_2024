#include <Arduino.h>

#include <hardware_interface.hpp>
#include <track_line.hpp>
#include <configs.hpp>

void Track_Line::run()
{
    HW_API::read_data();

    if(G::left_on_line && G::right_on_line){
        HW_API::forward();
        delay(10);
    } else if (!G::left_on_line && G::right_on_line){
        HW_API::turn_right();
        delay(10);
    } else if (G::left_on_line && !G::right_on_line){
        HW_API::turn_left();
        delay(10);
    } else if (!G::left_on_line && !G::right_on_line){
        HW_API::backward();
        delay(10);
    } else {
        
    }
    
}