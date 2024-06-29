#include <ball.h>
#define pi 3.141592653
Ball::Ball()
{
}
void Ball::ba_val()
{
  timer timer1;
  int val1 = digitalRead(26);
  int val2 = digitalRead(25);
  int val3 = digitalRead(24);
  int val4 = digitalRead(23);
  int val5 = digitalRead(22);
  int val6 = digitalRead(10);
  int val7 = digitalRead(11);
  int val8 = digitalRead(14);
  int val9 = digitalRead(15);
  int val10 = digitalRead(16);
  int val11 = digitalRead(17);
  int val12 = digitalRead(18);
  int val13 = digitalRead(29);
  int val14 = digitalRead(28);
  int val15 = digitalRead(27);
  int val16 = digitalRead(26);
  int val[] = {val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val16};
  timer1.reset();
  unsigned long i = timer1.read_us();
  if (i < 833)
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
  }
  else
  { // リセット
    for (int i = 0; i < 16; i++)
    {
      ba[i] = 0;
    }
  }
}
void Ball::sort()
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
float Ball::ball_deg_pro() // deg_proは方位角
{
  ba_val();
  sort();
  ret = atan2f(x1 + x2 + x3 + x4 + x5, y1 + y2 + y3 + y4 + y5);
  deg_old = (180 / pi) * ret * rev_value_deg;
  deg_notpro = degree.entervalue(deg_old);
  deg_pro = Set::degfunc2(deg_notpro);
  return deg_pro;
}
float Ball::ball_r_pro()
{
  ba_val();
  sort();
  float r = sqrtf(((x1 + x2 + x3 + x4 + x5) * (x1 + x2 + x3 + x4 + x5)) + ((y1 + y2 + y3 + y4 + y5) * (y1 + y2 + y3 + y4 + y5)));
  r_notpro = distance.entervalue(r) * rev_value_r;
  r_pro = Set::degfunc2(r_notpro);
  return r_pro;
}

float Ball::ball_deg_notpro() // degは仰角
{
  ba_val();
  sort();
  ret = atan2f(x1 + x2 + x3 + x4 + x5, y1 + y2 + y3 + y4 + y5);
  deg_old = (180 / pi) * ret * rev_value_deg;
  deg_notpro = degree.entervalue(deg_old);
  deg_pro = Set::degfunc2(deg_notpro);
  return deg_notpro;
}
float Ball::ball_r_notpro()
{
  ba_val();
  sort();
  float r = sqrtf(((x1 + x2 + x3 + x4 + x5) * (x1 + x2 + x3 + x4 + x5)) + ((y1 + y2 + y3 + y4 + y5) * (y1 + y2 + y3 + y4 + y5)));
  r_notpro = distance.entervalue(r) * rev_value_r;
  r_pro = Set::degfunc2(r_notpro);
  return r_notpro;
}
void Ball()
{
}