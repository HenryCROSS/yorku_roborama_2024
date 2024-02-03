#include <Arduino.h>

#include <hardware_interface.hpp>
#include <track_line.hpp>
#include <configs.hpp>

void Track_Line::run()
{
    HW_API::read_data();

    if(G::left_on_line && G::right_on_line){

    } else if (!G::left_on_line && G::right_on_line){

    } else if (G::left_on_line && !G::right_on_line){
        
    } else if (!G::left_on_line && !G::right_on_line){
        
    } else {
        
    }
    
}