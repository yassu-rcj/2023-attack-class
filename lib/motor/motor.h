#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>
#include <pd.h>
#include <math.h>
class Motor
{
public:
    int motorspeed1, motorspeed2, motorspeed3, motorspeed4;
    int IN1mo1, IN2mo1, IN1mo2, IN2mo2, IN1mo3, IN2mo3, IN1mo4, IN2mo4;

    void motor_stop(void);
    void motor_deg(int angle);
    void motor_turn(float tardeg);
    void motor_deg_lin(int angle, int power);
    Motor();
    PDcon motor_a;
    PDcon motor_b;
    PDcon motor_c;
    PDcon motor_d;
};
#endif