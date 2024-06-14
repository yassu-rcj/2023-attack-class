#include <Arduino.h>
#include <bno.h>
#include <ball.h>
#include <pd.h>
#include <motor.h>
#include <line.h>
Line line_l;
Ball ball_b;
Motor motor_m;
PDcon pdcon_p;
Bno bno_b;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  char flag = 0;
  char flag_lin = 0;
  int deg = 0;
  int lin_deg = 0;
  if (flag == 0)
  { // 　姿勢制御
    bno_b.get_bno_data();
    motor_m.motor_turn(bno_b.deg_body, 0);
    flag = 1;
  }
  if (flag == 1)
  { // ボール取得
    deg = ball_b.ball_deg_pro();
    flag = 2;
  }
  if (flag == 2)
  { // ライン取得
    deg = line_l.line_deg();
    if (deg == 0)
    {
      flag = 3;
    }
    else
    {
      flag = 4;
    }
  }
  if (flag == 3)
  { // go!
    motor_m.motor_deg(Set::degfunc(deg));
    flag= 0;
  }
  if (flag == 4)
  { // line反応してる
    motor_m.motor_deg(lin_deg);
  }
}