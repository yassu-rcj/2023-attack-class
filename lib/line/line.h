#ifndef LINE_H
#define LINE_H
#include <Arduino.h>
#include <math.h>
#include <set.h>
class Line
{
public:
    char line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, line11, line12, line13, line14, line15, line16;
    char line[16] = {line1, line2, line3, line4, line5, line6, line7, line8, line9, line10, line11, line12, line13, line14, line15, line16};
    char pre_line1, pre_line2, pre_line3, pre_line4, pre_line5, pre_line6, pre_line7, pre_line8, pre_line9, pre_line10, pre_line11, pre_line12, pre_line13, pre_line14, pre_line15, pre_line16 = 0;
    char pre_line[16] = {pre_line1, pre_line2, pre_line3, pre_line4, pre_line5, pre_line6, pre_line7, pre_line8, pre_line9, pre_line10, pre_line11, pre_line12, pre_line13, pre_line14, pre_line15, pre_line16};
    float x = 0;
    float y = 0;
    float pre_x = 0;
    float pre_y = 0;
    int times = 0;

    Line();
    void Line_value();
    void line_conv();
    float line_deg();
    void line_reset();
};
#endif