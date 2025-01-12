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
  Serial.print(">a:");
  Serial.println(a);
  if (a == 0)
  {
    moto.motor_deg(0);
  }
  else
  {
    moto.motor_deg(a);
    delay(400);
  }
}