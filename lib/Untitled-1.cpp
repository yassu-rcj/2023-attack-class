#define pi 3.14159
#include <Arduino.h>
#include <set.h>
#include <timer.h>
#include <MA.h>
MAandRingBufa degree;
MAandRingBufa distance;
int ball1, ball2, ball3, ball4, ball5, ball6, ball7, ball8, ball9, ball10, ball11, ball12, ball13, ball14, ball15, ball16;
int ba[16] = {ball1, ball2, ball3, ball4, ball5, ball6, ball7, ball8, ball9, ball10, ball11, ball12, ball13, ball14, ball15, ball16};
float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, deg_old, ret;
float x[5] = {x1, x2, x3, x4, x5};
float y[5] = {y1, y2, y3, y4, y5};
const int rev_value_r = 1;   // 補正値
const int rev_value_deg = 1; // 補正値
float deg_pro, r_pro;        // 北から時計回りに変換した値（方位角)
float deg_notpro, r_notpro;  // 東から反時計回り(仰角)
void ba_val();
void sort();
float ball_deg_pro();
void setup()
{
    Serial.begin(115200);
}

void loop()
{
    
    Serial.print(">a:");
    Serial.println(a);
}
void ba_val()
{
    timer timer1;
    for (int i = 0; i < 16; i++)
    {
        ba[i] = 0;
    }
    int val1 = digitalRead(26);
    int val2 = digitalRead(27);
    int val3 = digitalRead(28);
    int val4 = digitalRead(29);
    int val5 = digitalRead(10);
    int val6 = digitalRead(11);
    int val7 = digitalRead(14);
    int val8 = digitalRead(15);
    int val9 = digitalRead(16);
    int val10 = digitalRead(17);
    int val11 = digitalRead(18);
    int val12 = digitalRead(19);
    int val13 = digitalRead(22);
    int val14 = digitalRead(23);
    int val15 = digitalRead(24);
    int val16 = digitalRead(25);
    int val[] = {val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val16};
    timer1.reset();
    unsigned long a = timer1.read_us();
    while (a < 8380)
    {
        for (int i = 0; i <= 15; i++)
        {
            if (val[i] == 0)
            {
                ba[i] = ba[i] + 1;
            }
            else
            {
                ba[i] = ba[i];
            }
        }
        a = timer1.read_us();
        int val1 = digitalRead(26);
        int val2 = digitalRead(27);
        int val3 = digitalRead(28);
        int val4 = digitalRead(29);
        int val5 = digitalRead(10);
        int val6 = digitalRead(11);
        int val7 = digitalRead(14);
        int val8 = digitalRead(15);
        int val9 = digitalRead(16);
        int val10 = digitalRead(17);
        int val11 = digitalRead(18);
        int val12 = digitalRead(19);
        int val13 = digitalRead(22);
        int val14 = digitalRead(23);
        int val15 = digitalRead(24);
        int val16 = digitalRead(25);
    }
    ball1 = ba[0];
    ball2 = ba[1];
    ball3 = ba[2];
    ball4 = ba[3];
    ball5 = ba[4];
    ball6 = ba[5];
    ball7 = ba[6];
    ball8 = ba[7];
    ball9 = ba[8];
    ball10 = ba[9];
    ball11 = ba[10];
    ball12 = ba[11];
    ball13 = ba[12];
    ball14 = ba[13];
    ball15 = ba[14];
    ball16 = ba[15];
}
void sort()
{
    Set::bubble_sort(16, ba);
    for (int n = 15; n > 10; n--)
    {
        if (ba[n] == ball1)
        { // 90
            x[15 - n] = ball1;
            y[15 - n] = 0;
        }
        else if (ba[n] == ball2)
        { // 67.5
            x[15 - n] = 0.3826834 * ball2;
            y[15 - n] = 0.9238795 * ball2;
        }
        else if (ba[n] == ball3)
        { // 45
            x[15 - n] = 0.7071067 * ball3;
            y[15 - n] = 0.7071067 * ball3;
        }
        else if (ba[n] == ball4)
        { // 22.5
            x[15 - n] = 0.92387953 * ball4;
            y[15 - n] = 0.38268343 * ball4;
        }
        else if (ba[n] == ball5)
        { // 0
            x[15 - n] = ball5;
            y[15 - n] = 0;
        }
        else if (ba[n] == ball6)
        { // 337.5
            x[15 - n] = 0.9238795 * ball6;
            y[15 - n] = -0.3826834 * ball6;
        }
        else if (ba[n] == ball7)
        { // 315
            x[15 - n] = 0.7071067 * ball7;
            y[15 - n] = -0.7071067 * ball7;
        }
        else if (ba[n] == ball8)
        { // 292.5
            x[15 - n] = 0.38268343 * ball8;
            y[15 - n] = -0.9238795 * ball8;
        }
        else if (ba[n] == ball9)
        { // 270
            x[15 - n] = 0;
            y[15 - n] = -1 * ball9;
        }
        else if (ba[n] == ball10)
        { // 247.5
            x[15 - n] = -0.3826834 * ball10;
            y[15 - n] = -0.9238795 * ball10;
        }
        else if (ba[n] == ball11)
        { // 225
            x[15 - n] = -0.7071067 * ball11;
            y[15 - n] = -0.7071067 * ball11;
        }
        else if (ba[n] == ball12)
        { // 202.5
            x[15 - n] = -0.9238795 * ball12;
            y[15 - n] = -0.3826834 * ball12;
        }
        else if (ba[n] == ball13)
        { // 180
            x[15 - n] = -1 * ball13;
            y[15 - n] = 0;
        }
        else if (ba[n] == ball14)
        { // 157.5
            x[15 - n] = -0.9238795 * ball14;
            y[15 - n] = 0.3826834 * ball14;
        }
        else if (ba[n] == ball15)
        { // 135
            x[15 - n] = -0.7071067 * ball15;
            y[15 - n] = 0.7071067 * ball15;
        }
        else if (ba[n] == ball16)
        { // 112.5
            x[15 - n] = -0.3826834 * ball16;
            y[15 - n] = 0.9238795 * ball16;
        }
    }
}
float ball_deg_pro() // deg_proは方位角
{
    ba_val();
    sort();
    ret = atan2f(x[0] + x[1] + x[2] + x[3] + x[4], y[0] + y[1] + y[2] + y[3] + y[4]);
    deg_old = (180 / pi) * ret * rev_value_deg;
    deg_pro = Set::degfunc2(deg_old);
    return deg_pro;
}