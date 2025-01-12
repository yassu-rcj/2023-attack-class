#ifndef MA_INCLUDE
#define MA_INCLUDE
#include <Arduino.h>
#define abcdef 40
class MAandRingBufa
{
public:
    int length;
    float record[abcdef] = {0};
    int count = -1;
    int times = 0;
    int top, bottom = 0;
    float average = 0;
    float sum = 0;

    void setlength(int length);
    float entervalue(float value);
    void reset();
    void SumOfArray();
};
#endif