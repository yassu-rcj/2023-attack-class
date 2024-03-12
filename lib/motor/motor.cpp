#define pi 3.141592653
#include <motor.h>
void Motor::motor_stop()
{
    analogWrite(IN1mo1, 0);
    analogWrite(IN2mo1, 0);
    analogWrite(IN1mo2, 0);
    analogWrite(IN2mo2, 0);
    analogWrite(IN1mo3, 0);
    analogWrite(IN2mo3, 0);
    analogWrite(IN1mo4, 0);
    analogWrite(IN2mo4, 0);
}
void Motor ::motor_deg(float angle) // angleは方位角
{
    motorspeed1 = 100 * sin((angle - 45) * (180 / pi));
    motorspeed2 = 100 * sin((angle - 135) * (180 / pi));
    motorspeed3 = 100 * sin((angle - 225) * (180 / pi));
    motorspeed4 = 100 * sin((angle - 315) * (180 / pi));
    if (motorspeed1 >= 0)
    { // 後で変更
        analogWrite(IN1mo1, 0);
        analogWrite(IN2mo1, motorspeed1);
    }
    else
    {
        analogWrite(IN1mo1, -1 * motorspeed1);
        analogWrite(IN2mo1, 0);
    }
    if (motorspeed2 >= 0)
    { // 後で変更
        analogWrite(IN1mo2, 0);
        analogWrite(IN2mo2, motorspeed2);
    }
    else
    {
        analogWrite(IN1mo2, -1 * motorspeed2);
        analogWrite(IN2mo3, 0);
    }
    if (motorspeed3 >= 0)
    { // 後で変更
        analogWrite(IN1mo3, 0);
        analogWrite(IN2mo3, motorspeed3);
    }
    else
    {
        analogWrite(IN1mo3, -1 * motorspeed3);
        analogWrite(IN2mo3, 0);
    }
    if (motorspeed4 >= 0)
    { // 後で変更
        analogWrite(IN1mo4, 0);
        analogWrite(IN2mo4, -1 * motorspeed4);
    }
    else
    {
        analogWrite(IN1mo4, -1 * motorspeed4);
        analogWrite(IN2mo4, 0);
    }
}
void Motor::motor_turn(float NOW, float tardeg) // degは方位角
{

    motorspeed1 = Motor::motor_a.PD(NOW, tardeg);
    motorspeed2 = Motor::motor_b.PD(NOW, tardeg);
    motorspeed3 = this->motor_c.PD(NOW, tardeg);
    motorspeed4 = this->motor_d.PD(NOW, tardeg);
    if (motorspeed1 >= 0)
    { // 後で変更
        analogWrite(IN1mo1, 0);
        analogWrite(IN2mo1, motorspeed1);
    }
    else
    {
        analogWrite(IN1mo1, -1 * motorspeed1);
        analogWrite(IN2mo1, 0);
    }
    if (motorspeed2 >= 0)
    { // 後で変更
        analogWrite(IN1mo2, 0);
        analogWrite(IN2mo2, motorspeed2);
    }
    else
    {
        analogWrite(IN1mo2, -1 * motorspeed2);
        analogWrite(IN2mo3, 0);
    }
    if (motorspeed3 >= 0)
    { // 後で変更
        analogWrite(IN1mo3, 0);
        analogWrite(IN2mo3, motorspeed3);
    }
    else
    {
        analogWrite(IN1mo3, -1 * motorspeed3);
        analogWrite(IN2mo3, 0);
    }
    if (motorspeed4 >= 0)
    { // 後で変更
        analogWrite(IN1mo4, 0);
        analogWrite(IN2mo4, motorspeed4);
    }
    else
    {
        analogWrite(IN1mo4, -1 * motorspeed4);
        analogWrite(IN2mo4, 0);
    }
}
Motor::Motor()
{
    pinMode(IN1mo1, OUTPUT);
    pinMode(IN2mo1, OUTPUT);
    pinMode(IN1mo2, OUTPUT);
    pinMode(IN2mo2, OUTPUT);
    pinMode(IN1mo3, OUTPUT);
    pinMode(IN2mo3, OUTPUT);
    pinMode(IN1mo4, OUTPUT);
    pinMode(IN2mo4, OUTPUT);
}