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
<<<<<<< HEAD
        
        HW_API::emerg_stop();
        delay(500);
        while (!G::left_on_line || G::right_on_line)
        {
            HW_API::read_data();   
            HW_API::turn_left();
            Serial.println("Left_out");
        }
=======
        Serial.println("left_out");
        HW_API::turn_left();
        // delay(300);
        // HW_API::emerg_stop();
        // delay(100);
>>>>>>> 382f1124ec5810b8481e91dc8f77ec0c5c236d33
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
        // delay(300);
        // HW_API::emerg_stop();
        // delay(100);
    } else if (!G::left_on_line && !G::right_on_line){
        HW_API::emerg_stop();
        delay(500);
        while (!G::left_on_line || !G::right_on_line)
        {
            HW_API::read_data();   
            HW_API::backward();
            Serial.println("out");
        }
        HW_API::emerg_stop();
        delay(500);
        HW_API::forward();
        delay(100);
    } else {
        
    }
<<<<<<< HEAD
    delayMicroseconds(10);
    
=======
    // delayMicroseconds(1);
    // delay(500);
    // HW_API::emerg_stop();
    // delay(100);
>>>>>>> 382f1124ec5810b8481e91dc8f77ec0c5c236d33
}