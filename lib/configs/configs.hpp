#ifndef _CONFIGS_HPP_
#define _CONFIGS_HPP_

#include <Arduino.h>

class G
{
#define CS const static

public:
    CS int LEFT_MOTOR = 10;           // Motor A enable pin
    CS int RIGHT_MOTOR = 11;          // Motor B enable pin
    CS int RIGHT_WHEEL_FORWARD = 9;   // Motor B In1 pin
    CS int RIGHT_WHEEL_BACKWARD = 12; // Motor B In2 pin
    CS int LEFT_WHEEL_FORWARD = 7;    // Motor A In1 pin
    CS int LEFT_WHEEL_BACKWARD = 8;   // Motor A In2 pin
    CS int TRIGGER_PIN_L = 2;         // Ultrasonic sensor trigger pin
    CS int ECHO_PIN_L = 3;            // Ultrasonic sensor echo pin
    CS int TRIGGER_PIN_R = 4;         // Ultrasonic sensor trigger pin
    CS int ECHO_PIN_R = 5;            // Ultrasonic sensor echo pin
    CS int QTR_SENSOR_FL = A2;        // qtr sensor
    CS int QTR_SENSOR_FR = A1;        // qtr sensor
    CS int QTR_SENSOR_B = A0;         // qtr sensor
    CS int DELTA = 0;

    static void init()
    {
    }

#undef CS
};

#endif // !_CONFIGS_HPP_