#include <Arduino.h>

#include <configs.hpp>
#include <hardware_interface.hpp>

void wheel_forward(uint8_t forward_pin, uint8_t backward_pin)
{
    digitalWrite(forward_pin, HIGH);
    digitalWrite(backward_pin, LOW);
}

void wheel_backward(uint8_t forward_pin, uint8_t backward_pin)
{
    digitalWrite(forward_pin, LOW);
    digitalWrite(backward_pin, HIGH);
}

void wheel_stop(uint8_t forward_pin, uint8_t backward_pin)
{
    digitalWrite(forward_pin, HIGH);
    digitalWrite(backward_pin, HIGH);
}

void wheel_move_speed(uint8_t pin, int speed)
{
    analogWrite(pin, speed);
}

void car_go_forward(int speed)
{
    wheel_move_speed(G::LEFT_MOTOR, speed-G::DELTA);
    wheel_move_speed(G::RIGHT_MOTOR, speed+G::DELTA);
    wheel_forward(G::LEFT_WHEEL_FORWARD, G::LEFT_WHEEL_BACKWARD);
    wheel_forward(G::RIGHT_WHEEL_FORWARD, G::RIGHT_WHEEL_BACKWARD);
}

void car_go_forward_by_speed(int left_wheel_speed, int right_wheel_speed)
{
    wheel_move_speed(G::LEFT_MOTOR, left_wheel_speed);
    wheel_move_speed(G::RIGHT_MOTOR, right_wheel_speed);
    wheel_forward(G::LEFT_WHEEL_FORWARD, G::LEFT_WHEEL_BACKWARD);
    wheel_forward(G::RIGHT_WHEEL_FORWARD, G::RIGHT_WHEEL_BACKWARD);
}

void car_go_backward(int speed)
{
    wheel_move_speed(G::LEFT_MOTOR, speed-G::DELTA);
    wheel_move_speed(G::RIGHT_MOTOR, speed+G::DELTA);
    wheel_backward(G::LEFT_WHEEL_FORWARD, G::LEFT_WHEEL_BACKWARD);
    wheel_backward(G::RIGHT_WHEEL_FORWARD, G::RIGHT_WHEEL_BACKWARD);
}

void car_go_backward_by_speed(int left_wheel_speed, int right_wheel_speed)
{
    wheel_move_speed(G::LEFT_MOTOR, left_wheel_speed);
    wheel_move_speed(G::RIGHT_MOTOR, right_wheel_speed);
    wheel_backward(G::LEFT_WHEEL_FORWARD, G::LEFT_WHEEL_BACKWARD);
    wheel_backward(G::RIGHT_WHEEL_FORWARD, G::RIGHT_WHEEL_BACKWARD);
}

void car_turn_right_by_speed(int left_wheel_forward_speed, int right_wheel_backward_speed)
{
    wheel_move_speed(G::LEFT_MOTOR, left_wheel_forward_speed);
    wheel_move_speed(G::RIGHT_MOTOR, right_wheel_backward_speed);
    wheel_forward(G::LEFT_WHEEL_FORWARD, G::LEFT_WHEEL_BACKWARD);
    wheel_backward(G::RIGHT_WHEEL_FORWARD, G::RIGHT_WHEEL_BACKWARD);
}

void car_turn_left_by_speed(int left_wheel_backward_speed, int right_wheel_forward_speed)
{
    wheel_move_speed(G::LEFT_MOTOR, left_wheel_backward_speed);
    wheel_move_speed(G::RIGHT_MOTOR, right_wheel_forward_speed);
    wheel_forward(G::RIGHT_WHEEL_FORWARD, G::RIGHT_WHEEL_BACKWARD);
    wheel_backward(G::LEFT_WHEEL_FORWARD, G::LEFT_WHEEL_BACKWARD);
}

void HW_API::forward()
{

}

void HW_API::backward()
{
    
}