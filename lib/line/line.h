#ifndef LINE_H
#define LINE_H
#include <Arduino.h>
#include <math.h>
#include <set.h>
class Line
{
private:
    char line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, line11, line12, line13, line14, line15, line16;
    char line[16] = {line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, line11, line12, line13, line14, line15, line16};
    float x, y;

public:
    Line();
    void Line_value();
    void line_conv();
    float line_deg();
    void line_reset();
};
#endif