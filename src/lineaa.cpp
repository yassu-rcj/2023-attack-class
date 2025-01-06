#include <line.h>
#include <Arduino.h>
#include <motor.h>
#include <ball.h>
Line line;
Ball ball;
Motor moto;
float a, b, c, d, e, f, g, h, i;
void setup()
{
    Serial.begin(115200);
}
void loop()
{
    a = line.line_deg();
    if (a == 90)
    {
        moto.motor_stop();
    }
    else
    {
        moto.motor_deg(a);
    }
}