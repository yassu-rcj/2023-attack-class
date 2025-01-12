#include <Arduino.h>
#include <ball.h>
#include <timer.h>
Ball ball;
float a;
void setup()
{
    Serial.begin(115200);
}
void loop()
{
    a = ball.ball_deg_pro();
    Serial.print(">a:");
    Serial.println(a);
}