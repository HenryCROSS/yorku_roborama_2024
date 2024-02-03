#include <common.hpp>


void Track_Line::run()
{
    HW_API::read_data();

    if(G::left_on_line && G::right_on_line){
        HW_API::forward();
        Serial.println("on_line");
    } else if (!G::left_on_line && G::right_on_line){
        HW_API::turn_right();
        Serial.println("left_out");
    } else if (G::left_on_line && !G::right_on_line){
        HW_API::turn_left();
        Serial.println("right_out");
    } else if (!G::left_on_line && !G::right_on_line){
        HW_API::backward();
        Serial.println("out");
    } else {
        
    }
    delayMicroseconds(1);
}