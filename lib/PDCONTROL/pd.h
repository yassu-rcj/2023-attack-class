#ifndef PD_H
#define PD_H
#include <Arduino.h>
#include <bno.h>
class PDcon
{
public:
    int P_gain = 1;
    int D_gain = 1;
    float P_power, PD_power;
    float NOW;
    float a;
    float pre_diff, diff;
    char b = 0;
    int P(float NOW, float tardeg);
    int PD(float tardeg);
    Bno bno;
};
#endif