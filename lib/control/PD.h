#ifndef PD_H
#define PD_H
#include <Arduino.h>
#include <timer.h>
class PDcon
{
private:
    int P_gain, D_gain;
    float P_power, PD_power;

public:
    P(float, float);
    PD(float, float);
}
#endif