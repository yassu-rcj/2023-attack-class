#include <Arduino.h>
#include <motor.h>
#include <ball.h>
Motor motor_m;
Ball ball_b;
int a;
void setup()
{
    Serial.begin(115200);
}
void loop()
{
    a = ball_b.ball_deg_pro();

    Serial.print(">a:");
    Serial.println(a);
    motor_m.motor_deg(a);
    Serial.print(">ss:");
    Serial.println(motor_m.motorspeed1);
    Serial.print(">a:");
    Serial.println(a);
}