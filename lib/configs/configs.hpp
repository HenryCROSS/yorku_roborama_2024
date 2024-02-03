#ifndef _CONFIGS_HPP_
#define _CONFIGS_HPP_

#include <Arduino.h>

class G
{
#define CS const static

public:
    CS int LEFT_MOTOR = A0;           // Motor A enable pin
    CS int RIGHT_MOTOR = A5;          // Motor B enable pin
    CS int RIGHT_WHEEL_FORWARD = A4;   // Motor B In1 pin
    CS int RIGHT_WHEEL_BACKWARD = A3; // Motor B In2 pin
    CS int LEFT_WHEEL_FORWARD = A1;    // Motor A In1 pin
    CS int LEFT_WHEEL_BACKWARD = A2;   // Motor A In2 pin
    CS int SENSOR_L = A2;        // qtr sensor
    CS int SENSOR_R = A1;        // qtr sensor

    CS int DELTA = 0; // left speed will minus this value

    CS int SPEED = 100; // car speed
    

    static void init()
    {
    }

#undef CS
};

#endif // !_CONFIGS_HPP_