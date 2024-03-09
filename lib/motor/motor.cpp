#include <Arduino.h>
#include <motor.h>
Motor::motor_stop()
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
Motor ::motor_deg(float angle) // angleは方位角
{
    motorspeed1 = 100 * sin((angle - 45) * (180 / pi));
    motorspeed2 = 100 * sin((angle - 135) * (180 / pi));
    motorspeed3 = 100 * sin((angle - 225) * (180 / pi));
    motorspeed4 = 100 * sin((angle - 315) * (180 / pi));
    if (motor_speed_1 >= 0)
    { // 後で変更
        analogWrite(IN1mo1, 0);
        analogWrite(IN2mo1, motor_speed_1);
    }
    else
    {
        analogWrite(IN1mo1, -1 * motor_speed_1);
        analogWrite(IN2mo1, 0);
    }
    if (motor_speed_2 >= 0)
    { // 後で変更
        analogWrite(IN1mo2, 0);
        analogWrite(IN2mo2, motor_speed_2);
    }
    else
    {
        analogWrite(IN1mo2, -1 * motor_speed_2);
        analogWrite(IN2mo3, 0);
    }
    if (motor_speed_3 >= 0)
    { // 後で変更
        analogWrite(IN1mo3, 0);
        analogWrite(IN2mo3, motor_speed_3);
    }
    else
    {
        analogWrite(IN1mo3, -1 * motor_speed_3);
        analogWrite(IN2mo3, 0);
    }
    if (motor_speed_4 >= 0)
    { // 後で変更
        analogWrite(IN1mo4, 0);
        analogWrite(IN2mo4, -1 * motor_speed_4);
    }
    else
    {
        analogWrite(IN1mo4, -1 * motor_speed_4);
        analogWrite(IN2mo4, 0);
    }
}
Motor::motor_turn(float NOW, float tardeg) // degは方位角
{
    motor_a.PD(NOW, tardeg);
    motorspeed1 = motor_a.PD_power;
    motorspeed2 = motor_a.PD_power;
    motorspeed3 = motor_a.PD_power;
    motorspeed4 = motor_a.PD_power;
    if (motor_speed_1 >= 0)
    { // 後で変更
        analogWrite(IN1mo1, 0);
        analogWrite(IN2mo1, motor_speed_1);
    }
    else
    {
        analogWrite(IN1mo1, -1 * motor_speed_1);
        analogWrite(IN2mo1, 0);
    }
    if (motor_speed_2 >= 0)
    { // 後で変更
        analogWrite(IN1mo2, 0);
        analogWrite(IN2mo2, motor_speed_2);
    }
    else
    {
        analogWrite(IN1mo2, -1 * motor_speed_2);
        analogWrite(IN2mo3, 0);
    }
    if (motor_speed_3 >= 0)
    { // 後で変更
        analogWrite(IN1mo3, 0);
        analogWrite(IN2mo3, motor_speed_3);
    }
    else
    {
        analogWrite(IN1mo3, -1 * motor_speed_3);
        analogWrite(IN2mo3, 0);
    }
    if (motor_speed_4 >= 0)
    { // 後で変更
        analogWrite(IN1mo4, 0);
        analogWrite(IN2mo4, motor_speed_4);
    }
    else
    {
        analogWrite(IN1mo4, -1 * motor_speed_4);
        analogWrite(IN2mo4, 0);
    }
}