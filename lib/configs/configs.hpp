#ifndef _CONFIGS_HPP_
#define _CONFIGS_HPP_

#include <Arduino.h>

class G
{
#define CS const static

public:
    CS int LEFT_MOTOR = 6;           // Motor A enable pin
    CS int RIGHT_MOTOR = 11;          // Motor B enable pin
    CS int RIGHT_WHEEL_FORWARD = 10;   // Motor B In1 pin
    CS int RIGHT_WHEEL_BACKWARD = 9; // Motor B In2 pin
    CS int LEFT_WHEEL_FORWARD = 7;    // Motor A In1 pin
    CS int LEFT_WHEEL_BACKWARD = 8;   // Motor A In2 pin
    CS int SENSOR_L = 4;        // qtr sensor
    CS int SENSOR_R = 5;        // qtr sensor

    CS int DELTA_VERSION = 1;
    template <int VERSION>
    static int DELTA; // left speed will minus this value

    CS int SPEED = 255; // car speed
    
    static bool left_on_line;
    static bool right_on_line;

    static void init()
    {
        pinMode(LEFT_MOTOR,OUTPUT);
        pinMode(RIGHT_MOTOR,OUTPUT);
        pinMode(RIGHT_WHEEL_FORWARD,OUTPUT);
        pinMode(RIGHT_WHEEL_BACKWARD,OUTPUT);
        pinMode(LEFT_WHEEL_FORWARD,OUTPUT);
        pinMode(RIGHT_WHEEL_BACKWARD,OUTPUT);
        pinMode(SENSOR_L,INPUT);
        pinMode(SENSOR_R,INPUT);
        Serial.begin(9600);
    }

#undef CS
};


#endif // !_CONFIGS_HPP_