#include <line.h>
#include <motor.h>
Motor motor;
Line::Line()
{
}
void Line::Line_value()
{
    if (times == 0)
    {
        /*this->line1 = digitalRead(38);  // 0*/
        /*this->line2 = digitalRead(46);  // 壊れてる */
        /* this->line3 = digitalRead(45);  // 1 */
        this->line4 = digitalRead(44);  // OK
        this->line5 = digitalRead(43);  // OK
        this->line6 = digitalRead(42);  // OK
        this->line7 = digitalRead(41);  // OK
        this->line8 = digitalRead(40);  // OK
        this->line9 = digitalRead(30);  // OK
        this->line10 = digitalRead(31); // OK
        /*this->line11 = digitalRead(32); // 0 */
        /*this->line12 = digitalRead(33); // 1 */
        this->line13 = digitalRead(34); // OK
        this->line14 = digitalRead(35); // OK
        this->line15 = digitalRead(36); // 　
        this->line16 = digitalRead(37); //
        this->line1 = 0;
        this->line2 = 0;
        this->line3 = 0;
        this->line11 = 0;
        this->line12 = 0;
        this->line7 = 0;
    }
    else
    {
        pre_line1 = line1;
        pre_line2 = line2;
        pre_line3 = line3;
        pre_line4 = line4;
        pre_line5 = line5;
        pre_line6 = line6;
        pre_line7 = line7;
        pre_line8 = line8;
        pre_line9 = line9;
        pre_line10 = line10;
        pre_line11 = line11;
        pre_line12 = line12;
        pre_line13 = line13;
        pre_line14 = line14;
        pre_line15 = line15;
        pre_line16 = line16;
        /*this->line1 = digitalRead(38);  // 0*/
        /*this->line2 = digitalRead(46);  // 壊れてる */
        /* this->line3 = digitalRead(45);  // 1 */
        this->line4 = digitalRead(44);  // OK
        this->line5 = digitalRead(43);  // OK
        this->line6 = digitalRead(42);  // OK
        this->line7 = digitalRead(41);  // OK
        this->line8 = digitalRead(40);  // OK
        this->line9 = digitalRead(30);  // OK
        this->line10 = digitalRead(31); // OK
        /*this->line11 = digitalRead(32); // 0 */
        /*this->line12 = digitalRead(33); // 1 */
        this->line13 = digitalRead(34); // OK
        this->line14 = digitalRead(35); // OK
        this->line15 = digitalRead(36); // 　
        this->line16 = digitalRead(37); //
        this->line1 = 0;
        this->line2 = 0;
        this->line3 = 0;
        this->line11 = 0;
        this->line12 = 0;
        this->line7 = 0;
    }
}
void Line::line_conv()
{
    if (times == 0)
    {
        if (line1 == 1)
        {
            x += 1;
            y += 0;
        }
        if (line2 == 1)
        {
            x += 0.3826834;
            y += 0.9238795;
        }
        if (line3 == 1)
        {
            x += 0.7071068;
            y += 0.7071068;
        }
        if (line4 == 1)
        {
            x += 0.9238795;
            y += 0.3826834;
        }
        if (line5 == 1)
        {

            x += 1;
            y += 0;
        }
        if (line6 == 1)
        {
            x += 0.9238795;
            y += -0.3826834;
        }
        if (line7 == 1)
        {
            x += 0.7071068;
            y += -0.7071068;
        }
        if (line8 == 1)
        {
            x += 0.3826834;
            y += -0.9238795;
        }
        if (line9 == 1)
        {
            x += 0;
            y += -1;
        }
        if (line10 == 1)
        {
            x += -0.3826834;
            y += -0.9238795;
        }
        if (line11 == 1)
        {
            x += -0.7071068;
            y += -0.7071068;
        }
        if (line12 == 1)
        {
            x += -0.9238795;
            y += -0.3826834;
        }
        if (line13 == 1)
        {
            x += -1;
            y += 0;
        }
        if (line14 == 1)
        {
            x += -0.9238795;
            y += 0.3826834;
        }
        if (line15 == 1)
        {
            x += -0.7071068;
            y += 0.7071068;
        }
        if (line16 == 1)
        {
            x += -0.3826834;
            y += 0.9238795;
        }
    }
    else
    {
        if (line1 == 1)
        {
            x += 1;
            y += 0;
        }
        if (line2 == 1)
        {
            x += 0.3826834;
            y += 0.9238795;
        }
        if (line3 == 1)
        {
            x += 0.7071068;
            y += 0.7071068;
        }
        if (line4 == 1)
        {
            x += 0.9238795;
            y += 0.3826834;
        }
        if (line5 == 1)
        {

            x += 1;
            y += 0;
        }
        if (line6 == 1)
        {
            x += 0.9238795;
            y += -0.3826834;
        }
        if (line7 == 1)
        {
            x += 0.7071068;
            y += -0.7071068;
        }
        if (line8 == 1)
        {
            x += 0.3826834;
            y += -0.9238795;
        }
        if (line9 == 1)
        {
            x += 0;
            y += -1;
        }
        if (line10 == 1)
        {
            x += -0.3826834;
            y += -0.9238795;
        }
        if (line11 == 1)
        {
            x += -0.7071068;
            y += -0.7071068;
        }
        if (line12 == 1)
        {
            x += -0.9238795;
            y += -0.3826834;
        }
        if (line13 == 1)
        {
            x += -1;
            y += 0;
        }
        if (line14 == 1)
        {
            x += -0.9238795;
            y += 0.3826834;
        }
        if (line15 == 1)
        {
            x += -0.7071068;
            y += 0.7071068;
        }
        if (line16 == 1)
        {
            x += -0.3826834;
            y += 0.9238795;
        }
    }
}

float Line::line_deg()
{
    Line_value();
    line_conv();
    if (times == 0)
    {
        if (x == 0)
        {
            if (y == 0)
            {
                float degree_a = 0;
                pre_x = x;
                pre_y = y;
                line_reset();
                // times++;
                return degree_a;
            }
        }
        else
        {
            // ここの下のところが本当に逆の向きに行くのかが謎
            float degree = Set::degfunc3(Set::degfunc4(atan2(-1 * y, -1 * x)));
            pre_x = x;
            pre_y = y;
            line_reset();
            // times++;

            return degree;
        }
    }
    else
    {
        Serial.print(">aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa:");
        Serial.println(x * pre_x + y * pre_y);
        if (x * pre_x + y * pre_y > 0)
        {
            // ここの下のところが本当に逆の向きに行くのかが謎
            float degree = Set::degfunc3(atan(-1 * y / -1 * x) * 57.29);
            pre_x = x;
            pre_y = y;
            line_reset();
            return degree;
        }
        else
        {
            // ここの下のところが本当に逆の向きに行くのかが謎
            float degree = Set::degfunc3(atan2f(-1 * y, -1 * x) * 57.29);
            pre_x = x;
            pre_y = y;
            line_reset();
            return degree;
        }
    }
}
void Line::line_reset()
{
    x = 0;
    y = 0;
}