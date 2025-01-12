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
    line.Line_value();
    line.line[0] = line.line1;
    line.line[1] = line.line2;
    line.line[2] = line.line3;
    line.line[3] = line.line4;
    line.line[4] = line.line5;
    line.line[5] = line.line6;
    line.line[6] = line.line7;
    line.line[7] = line.line8;
    line.line[8] = line.line9;
    line.line[9] = line.line10;
    line.line[10] = line.line11;
    line.line[11] = line.line12;
    line.line[12] = line.line13;
    line.line[13] = line.line14;
    line.line[14] = line.line15;
    line.line[15] = line.line16;

    for (int i = 0; i < 16; i++)
    {
        if (line.line[i] == 1)
        {
            moto.motor_deg(0);
        }
        else
        {
            moto.motor_stop();
        }
    }
}