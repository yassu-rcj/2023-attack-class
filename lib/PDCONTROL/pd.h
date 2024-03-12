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
    int P(float NOW, float tardeg);
    int PD(float NOW, float tardeg);
};
#endif