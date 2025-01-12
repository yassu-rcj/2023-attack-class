
#include <motor.h>
Motor motora;
int a;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    motora.motor_deg(0);
    Serial.println("motorspeed1");
    Serial.println(motora.motorspeed1);
    Serial.println("motorspeed2");
    Serial.println(motora.motorspeed2);
    Serial.println("motorspeed3");
    Serial.println(motora.motorspeed3);
    Serial.println("motorspeed4");
    Serial.println(motora.motorspeed4);
}