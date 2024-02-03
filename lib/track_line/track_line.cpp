#include <hardware_interface.hpp>
#include <track_line.hpp>
#include <common.hpp>


void Track_Line::run()
{
    HW_API::read_data();

    if(G::left_on_line && G::right_on_line){
        HW_API::forward();
        Serial.println("on_line");
    } else if (!G::left_on_line && G::right_on_line){
        
        HW_API::emerg_stop();
        delay(500);
        while (!G::left_on_line || G::right_on_line)
        {
            HW_API::read_data();   
            HW_API::turn_left();
            Serial.println("Left_out");
        }
    } else if (G::left_on_line && !G::right_on_line){
        HW_API::emerg_stop();
        delay(500);
        while (G::left_on_line || !G::right_on_line)
        {
            HW_API::read_data();   
            HW_API::turn_right();
            Serial.println("Rithg_ot");
        }
        Serial.println("right_out");
    } else if (!G::left_on_line && !G::right_on_line){
        HW_API::emerg_stop();
        delay(500);
        while (!G::left_on_line || !G::right_on_line)
        {
            HW_API::read_data();   
            HW_API::backward();
            Serial.println("out");
        }
    } else {
        
    }
    delayMicroseconds(10);
    
}