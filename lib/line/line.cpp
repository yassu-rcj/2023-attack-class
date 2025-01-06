#include <line.h>
#include <motor.h>
Motor motor;
Line::Line()
{
}
void Line::Line_value()
{
    this->line1 = digitalRead(36);
    this->line2 = digitalRead(37);
    this->line3 = digitalRead(38);
    this->line4 = digitalRead(46);
    this->line5 = digitalRead(45);
    this->line6 = digitalRead(44);
    this->line7 = digitalRead(43);
    this->line8 = digitalRead(42);
    this->line9 = digitalRead(41);
    this->line10 = digitalRead(40);
    this->line11 = digitalRead(30);
    this->line12 = digitalRead(31);
    this->line13 = digitalRead(32);
    this->line14 = digitalRead(33);
    this->line15 = digitalRead(34);
    this->line16 = digitalRead(35);
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