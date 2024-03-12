#include <PD.h>
#include <Arduino.h>
timer timer_a;
int PDcon::P(float NOW, float tardeg)
{
    P_power = (tardeg - NOW) * P_gain;
    return P_power;
}
int PDcon::PD(float NOW, float tardeg)
{
    timer_a.reset();
    float pre_diff = tardeg - NOW;
    float diff = tardeg - NOW;
    int time = timer_a.read_us();
    PD_power = (tardeg - NOW) * P_gain - ((diff - pre_diff) / time) * D_gain;
    return PD_power;
}