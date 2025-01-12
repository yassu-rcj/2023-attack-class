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
int flag = 1;
int flag_lin = 0;
int deg = 0;
int lin_deg = 0;
int b = 0;
int a = 0;

void setup()
{
  Serial.begin(115200);

}
void loop()
{

  while (1)
  {
    
      if (flag == 1)
      { // ボール取得
        deg = ball_b.ball_deg_pro();

        flag = 2;
      }
      if (flag == 2)
      { // ライン取得
        lin_deg = line_l.line_deg();
        if (lin_deg == 0)
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
        motor_m.motor_deg(deg);
        flag = 1;
        b++;
      }
      if (flag == 4)
      { // line反応してる
        motor_m.motor_deg(lin_deg);
        flag = 1;
        b++;
      }
    }
  }