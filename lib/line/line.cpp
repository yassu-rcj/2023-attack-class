#include <line.h>
Line::Line()
{
}
void Line::Line_value()
{
    this->line1 = digitalRead();
    this->line2 = digitalRead()
    this->line3 = digitalRead();
    this->line4 = digitalRead();
    this->line5 = digitalRead();
    this->line6 = digitalRead();
    this->line7 = digitalRead();
    this->line8 = digitalRead();
    this->line9 = digitalRead();
    this->line10 = digitalRead();
    this->line11 = digitalRead();
    this->line12 = digitalRead();
    this->line13 = digitalRead();
    this->line14 = digitalRead();
    this->line15 = digitalRead();
    this->line16 = digitalRead();
}
void Line::line_conv()
{
    if (line1 == 0)
    {
        x += 1;
        y += 0;
    }
    else if (line2 == 0)
    {
        x += 0.3826834;
        y += 0.9238795;
    }
    else if (line3 == 0)
    {
        x += 0.7071068;
        y += 0.7071068;
    }
    else if (line4 == 0)
    {
        x += 0.9238795;
        y += 0.3826834;
    }
    else if (line5 == 0)
    {
        x += 1;
        y += 0;
    }
    else if (line6 == 0)
    {
        x += 0.9238795;
        y += -0.3826834;
    }
    else if (line7 == 0)
    {
        x += 0.7071068;
        y += -0.7071068;
    }
    else if (line8 == 0)
    {
        x += 0.3826834;
        y += -0.9238795;
    }
    else if (line9 == 0)
    {
        x += 0;
        y += -1;
    }
    else if (line10 == 0)
    {
        x += -0.3826834;
        y += -0.9238795;
    }
    else if (line11 == 0)
    {
        x += -0.7071068;
        y += -0.7071068;
    }
    else if (line12 == 0)
    {
        x += -0.9238795;
        y += -0.3826834;
    }
    else if (line13 == 0)
    {
        x += -1;
        y += 0;
    }
    else if (line14 == 0)
    {
        x += -0.9238795;
        y += 0.3826834;
    }
    else if (line15 == 0)
    {
        x += -0.7071068;
        y += 0.7071068;
    }
    else if (line16 == 0)
    {
        x += -0.3826834;
        y += 0.9238795;
    }
}

float Line::line_deg()
{
    Line_value();
    line_conv();
    float degree = Set::degfunc3(atan(-1 * y / -1 * x) * 57.29);
    line_reset();
    return degree;
}
void Line::line_reset()
{
    x = 0;
    y = 0;
}