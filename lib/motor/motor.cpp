#define pi 3.141592653
#include <motor.h>
#define l 0
#define h 200
#define k 40
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
void Motor ::motor_deg(int angle) // angleは方位角
{

    if (angle == 1)
    {
        motorspeed1 = 100 * sin((angle - 45) * (pi / 180));
        motorspeed2 = 100 * sin((angle - 135) * (pi / 180));
        motorspeed3 = 100 * sin((angle - 225) * (pi / 180));
        motorspeed4 = 100 * sin((angle - 315) * (pi / 180));
    }
    else if (angle == 337)
    {
        motorspeed1 = 100 * sin((angle - 45) * (pi / 180));
        motorspeed2 = 100 * sin((angle - 135) * (pi / 180));
        motorspeed3 = 100 * sin((angle - 225) * (pi / 180));
        motorspeed4 = 100 * sin((angle - 315) * (pi / 180));
    }
    else if (angle == 22)
    {
        motorspeed1 = 120 * sin((angle - 45) * (pi / 180));
        motorspeed2 = 120 * sin((angle - 135) * (pi / 180));
        motorspeed3 = 120 * sin((angle - 225) * (pi / 180));
        motorspeed4 = 120 * sin((angle - 315) * (pi / 180));
    }

    else
    {
        motorspeed1 = 100 * sin((angle - 45) * (pi / 180));
        motorspeed2 = 100 * sin((angle - 135) * (pi / 180));
        motorspeed3 = 100 * sin((angle - 225) * (pi / 180));
        motorspeed4 = 100 * sin((angle - 315) * (pi / 180));
    }

    Serial.print(">motorspeed1:");
    Serial.println(motorspeed1);
    Serial.print(">motorspeed2:");
    Serial.println(motorspeed2);
    Serial.print(">motorspeed3:");
    Serial.println(motorspeed3);
    Serial.print(">motorspeed4:");
    Serial.println(motorspeed4);

    if (motorspeed1 >= 0)
    { // 後で変更
        analogWrite(IN1mo1, motorspeed1);
        analogWrite(IN2mo1, 0);
    }
    else
    {
        analogWrite(IN1mo1, 0);
        analogWrite(IN2mo1, -1 * motorspeed1);
    }
    if (motorspeed2 >= 0)
    { // 後で変更
        analogWrite(IN1mo2, motorspeed2);
        analogWrite(IN2mo2, 0);
    }
    else
    {
        analogWrite(IN1mo2, 0);
        analogWrite(IN2mo2, -1 * motorspeed2);
    }
    if (motorspeed3 >= 0)
    { // 後で変更
        analogWrite(IN1mo3, motorspeed3);
        analogWrite(IN2mo3, 0);
    }
    else
    {
        analogWrite(IN1mo3, 0);
        analogWrite(IN2mo3, -1 * motorspeed3);
    }
    if (motorspeed4 >= 0)
    { // 後で変更
        analogWrite(IN1mo4, motorspeed4);
        analogWrite(IN2mo4, 0);
    }
    else
    {
        analogWrite(IN1mo4, 0);
        analogWrite(IN2mo4, -1 * motorspeed4);
    }
}
void Motor ::motor_deg_lin(int angle, int power) // angleは方位角
{

    motorspeed1 = power * sin((angle - 45) * (pi / 180));
    motorspeed2 = power * sin((angle - 135) * (pi / 180));
    motorspeed3 = power * sin((angle - 225) * (pi / 180));
    motorspeed4 = power * sin((angle - 315) * (pi / 180));

    Serial.print(">motorspeed1:");
    Serial.println(motorspeed1);
    Serial.print(">motorspeed2:");
    Serial.println(motorspeed2);
    Serial.print(">motorspeed3:");
    Serial.println(motorspeed3);
    Serial.print(">motorspeed4:");
    Serial.println(motorspeed4);

    if (motorspeed1 >= 0)
    { // 後で変更
        analogWrite(IN1mo1, motorspeed1);
        analogWrite(IN2mo1, 0);
    }
    else
    {
        analogWrite(IN1mo1, 0);
        analogWrite(IN2mo1, -1 * motorspeed1);
    }
    if (motorspeed2 >= 0)
    { // 後で変更
        analogWrite(IN1mo2, motorspeed2);
        analogWrite(IN2mo2, 0);
    }
    else
    {
        analogWrite(IN1mo2, 0);
        analogWrite(IN2mo2, -1 * motorspeed2);
    }
    if (motorspeed3 >= 0)
    { // 後で変更
        analogWrite(IN1mo3, motorspeed3);
        analogWrite(IN2mo3, 0);
    }
    else
    {
        analogWrite(IN1mo3, 0);
        analogWrite(IN2mo3, -1 * motorspeed3);
    }
    if (motorspeed4 >= 0)
    { // 後で変更
        analogWrite(IN1mo4, motorspeed4);
        analogWrite(IN2mo4, 0);
    }
    else
    {
        analogWrite(IN1mo4, 0);
        analogWrite(IN2mo4, -1 * motorspeed4);
    }
}
void Motor::motor_turn(float tardeg) // degは方位角
{
    if (tardeg + 10 > 360)
    {
        do
        {
            Serial.println("tardeg+10>360");
            motorspeed1 = Motor::motor_a.PD(tardeg);

            motorspeed2 = Motor::motor_b.PD(tardeg);

            motorspeed3 = Motor::motor_c.PD(tardeg);

            motorspeed4 = Motor::motor_d.PD(tardeg);

            if (motorspeed1 >= 0)
            { // 後で変更
                motorspeed1 = map(motorspeed1, 0, 359, l, h);
                if (motorspeed1 <= k - 1)
                {
                    motorspeed1 = k;
                }
                analogWrite(IN1mo1, motorspeed1);
                analogWrite(IN2mo1, 0);
            }
            else
            {
                motorspeed1 = motorspeed1 * -1;
                motorspeed1 = map(motorspeed1, 0, 359, l, h);
                if (motorspeed1 <= k - 1)
                {
                    motorspeed1 = k;
                }
                analogWrite(IN1mo1, 0);
                analogWrite(IN2mo1, motorspeed1);
            }
            if (motorspeed2 >= 0)
            { // 後で変更
                motorspeed2 = map(motorspeed2, 0, 359, l, h);
                if (motorspeed2 <= k - 1)
                {
                    motorspeed2 = k;
                }
                analogWrite(IN1mo2, motorspeed2);
                analogWrite(IN2mo2, 0);
            }
            else
            {
                motorspeed2 = motorspeed2 * -1;
                motorspeed2 = map(motorspeed2, 0, 359, l, h);
                if (motorspeed2 <= k - 1)
                {
                    motorspeed2 = k;
                }
                analogWrite(IN1mo2, 0);
                analogWrite(IN2mo3, motorspeed2);
            }
            if (motorspeed3 >= 0)
            { // 後で変更
                motorspeed3 = map(motorspeed3, 0, 359, l, h);
                if (motorspeed3 <= k - 1)
                {
                    motorspeed3 = k;
                }
                analogWrite(IN1mo3, motorspeed3);
                analogWrite(IN2mo3, 0);
            }
            else
            {
                motorspeed3 = -1 * motorspeed3;
                motorspeed3 = map(motorspeed3, 0, 359, l, h);
                if (motorspeed3 <= k - 1)
                {
                    motorspeed3 = k;
                }
                analogWrite(IN1mo3, 0);
                analogWrite(IN2mo3, motorspeed3);
            }
            if (motorspeed4 >= 0)
            { // 後で変更
                motorspeed4 = map(motorspeed4, 0, 359, l, h);
                if (motorspeed4 <= k - 1)
                {
                    motorspeed4 = k;
                }
                analogWrite(IN1mo4, motorspeed4);
                analogWrite(IN2mo4, 0);
            }
            else
            {
                motorspeed4 = -1 * motorspeed4;
                motorspeed4 = map(motorspeed4, 0, 359, l, h);
                if (motorspeed4 <= k - 1)
                {
                    motorspeed4 = k;
                }
                analogWrite(IN1mo4, 0);
                analogWrite(IN2mo4, motorspeed4);
            }
        } while (!((tardeg - 10 < Motor::motor_a.NOW && Motor::motor_a.NOW < 360) || (360 < Motor::motor_a.NOW && Motor::motor_a.NOW < Motor::motor_a.a + 10)));
    }
    else
    {
        if (tardeg - 10 < 0)
        {

            do
            {
                Serial.println("tardeg - 10 < 0");
                motorspeed1 = Motor::motor_a.PD(tardeg);

                motorspeed2 = Motor::motor_b.PD(tardeg);

                motorspeed3 = Motor::motor_c.PD(tardeg);

                motorspeed4 = Motor::motor_d.PD(tardeg);
                if (motorspeed1 >= 0)
                { // 後で変更
                    motorspeed1 = map(motorspeed1, 0, 359, l, h);
                    if (motorspeed1 <= k - 1)
                    {
                        motorspeed1 = k;
                    }
                    analogWrite(IN1mo1, motorspeed1);
                    analogWrite(IN2mo1, 0);
                }
                else
                {
                    motorspeed1 = motorspeed1 * -1;
                    motorspeed1 = map(motorspeed1, 0, 359, l, h);
                    if (motorspeed1 <= k - 1)
                    {
                        motorspeed1 = k;
                    }
                    analogWrite(IN1mo1, 0);
                    analogWrite(IN2mo1, motorspeed1);
                }
                if (motorspeed2 >= 0)
                { // 後で変更
                    motorspeed2 = map(motorspeed2, 0, 359, l, h);
                    if (motorspeed2 <= k - 1)
                    {
                        motorspeed2 = k;
                    }

                    analogWrite(IN1mo2, motorspeed2);
                    analogWrite(IN2mo2, 0);
                }
                else
                {
                    motorspeed2 = motorspeed2 * -1;
                    motorspeed2 = map(motorspeed2, 0, 359, l, h);
                    if (motorspeed2 <= k - 1)
                    {
                        motorspeed2 = k;
                    }
                    analogWrite(IN1mo2, 0);
                    analogWrite(IN2mo3, motorspeed2);
                }
                if (motorspeed3 >= 0)
                { // 後で変更
                    motorspeed3 = map(motorspeed3, 0, 359, l, h);
                    if (motorspeed3 <= k - 1)
                    {
                        motorspeed3 = k;
                    }
                    analogWrite(IN1mo3, motorspeed3);
                    analogWrite(IN2mo3, 0);
                }
                else
                {
                    motorspeed3 = motorspeed3 * -1;
                    motorspeed3 = map(motorspeed3, 0, 359, l, h);
                    if (motorspeed3 <= k - 1)
                    {
                        motorspeed3 = k;
                    }
                    analogWrite(IN1mo3, 0);
                    analogWrite(IN2mo3, motorspeed3);
                }
                if (motorspeed4 >= 0)
                { // 後で変更
                    motorspeed4 = map(motorspeed4, 0, 359, l, h);
                    if (motorspeed4 <= k - 1)
                    {
                        motorspeed4 = k;
                    }
                    analogWrite(IN1mo4, motorspeed4);
                    analogWrite(IN2mo4, 0);
                }
                else
                {
                    motorspeed4 = motorspeed4 * -1;
                    motorspeed4 = map(motorspeed4, 0, 359, l, h);
                    if (motorspeed4 <= k - 1)
                    {
                        motorspeed4 = k;
                    }
                    analogWrite(IN1mo4, 0);
                    analogWrite(IN2mo4, motorspeed4);
                }
            } while (!((Motor::motor_a.a < Motor::motor_a.NOW && Motor::motor_a.NOW < 360) || (0 < Motor::motor_a.NOW && Motor::motor_a.NOW < tardeg + 10)));
        }
        else
        {
            do
            {
                motorspeed1 = Motor::motor_a.PD(tardeg);

                motorspeed2 = Motor::motor_b.PD(tardeg);

                motorspeed3 = Motor::motor_c.PD(tardeg);

                motorspeed4 = Motor::motor_d.PD(tardeg);

                if (motorspeed1 >= 0)
                { // 後で変更
                    motorspeed1 = map(motorspeed1, 0, 359, l, h);
                    if (motorspeed1 <= k - 1)
                    {
                        motorspeed1 = k;
                    }
                    Serial.print(">motorspeed1:");
                    Serial.println(motorspeed1);
                    analogWrite(IN1mo1, motorspeed1);
                    analogWrite(IN2mo1, 0);
                }
                else
                {
                    motorspeed1 = -1 * motorspeed1;
                    motorspeed1 = map(motorspeed1, 0, 359, l, h);
                    if (motorspeed1 <= k - 1)
                    {
                        motorspeed1 = k;
                    }
                    Serial.print(">motorspeed1:");
                    Serial.println(motorspeed1);
                    analogWrite(IN1mo1, 0);

                    analogWrite(IN2mo1, motorspeed1);
                }
                if (motorspeed2 >= 0)
                { // 後で変更
                    motorspeed2 = map(motorspeed2, 0, 359, l, h);
                    if (motorspeed2 <= k - 1)
                    {
                        motorspeed2 = k;
                    }
                    Serial.print(">motorspeed2:");
                    Serial.println(motorspeed2);
                    analogWrite(IN1mo2, motorspeed2);
                    analogWrite(IN2mo2, 0);
                }
                else
                {
                    motorspeed2 = -1 * motorspeed2;
                    motorspeed2 = map(motorspeed2, 0, 359, l, h);
                    if (motorspeed2 <= k - 1)
                    {
                        motorspeed2 = k;
                    }
                    Serial.print(">motorspeed2:");
                    Serial.println(motorspeed2);
                    analogWrite(IN1mo2, 0);
                    analogWrite(IN2mo3, motorspeed2);
                }
                if (motorspeed3 >= 0)
                { // 後で変更
                    motorspeed3 = map(motorspeed3, 0, 359, l, h);
                    if (motorspeed3 <= k - 1)
                    {
                        motorspeed3 = k;
                    }
                    Serial.print(">motorspeed3:");
                    Serial.println(motorspeed3);
                    analogWrite(IN1mo3, motorspeed3);
                    analogWrite(IN2mo3, 0);
                }
                else
                {
                    motorspeed3 = -1 * motorspeed3;
                    motorspeed3 = map(motorspeed3, 0, 359, l, h);
                    if (motorspeed3 <= k - 1)
                    {
                        motorspeed3 = k;
                    }
                    Serial.print(">motorspeed3:");
                    Serial.println(motorspeed3);
                    analogWrite(IN1mo3, 0);
                    analogWrite(IN2mo3, motorspeed3);
                }
                if (motorspeed4 >= 0)
                { // 後で変更
                    motorspeed4 = map(motorspeed4, 0, 359, l, h);
                    if (motorspeed4 <= k - 1)
                    {
                        motorspeed4 = k;
                    }
                    Serial.print(">motorspeed4:");
                    Serial.println(motorspeed4);

                    analogWrite(IN1mo4, motorspeed4);
                    analogWrite(IN2mo4, 0);
                }
                else
                {
                    motorspeed4 = -1 * motorspeed4;
                    motorspeed4 = map(motorspeed4, 0, 359, l, h);
                    if (motorspeed4 <= k - 1)
                    {
                        motorspeed4 = k;
                    }
                    Serial.print(">motorspeed4:");
                    Serial.println(motorspeed4);
                    analogWrite(IN1mo4, 0);
                    analogWrite(IN2mo4, motorspeed4);
                }
            } while (!(tardeg - 10 < Motor::motor_a.NOW && tardeg + 10 > Motor::motor_a.NOW));
            Serial.print(">motorspeeaaaaaaaaaaaaa:");
        }
    }
}
Motor::Motor()
{
    IN1mo1 = 4;
    IN2mo1 = 5;
    IN1mo2 = 6;
    IN2mo2 = 7;
    IN1mo3 = 8;
    IN2mo3 = 9;
    IN1mo4 = 2;
    IN2mo4 = 3;
}