#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>
#include <PD.h>
#include <math.h>
class Motor
{
private:
    int motorspeed1, motorspeed2, motorspeed3, motorspeed4;
    int IN1mo1, IN2mo1, IN1mo2, IN2mo2, IN1mo3, IN2mo3, IN1mo4, IN2mo4;


public:
    void motor_stop(void);
    void motor_deg(float angle);
    void motor_turn(float NOW, float tardeg);
    Motor();
    PDcon motor_a;
    PDcon motor_b;
    PDcon motor_c;
    PDcon motor_d;
};
#endif