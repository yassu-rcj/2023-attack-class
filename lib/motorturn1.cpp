#include <Arduino.h>
#include <motor.h>

Motor motora;

void setup()
{
    Serial.begin(115200);
}
void loop()
{

    motora.motor_turn(0);
    Serial.print(">motorspeed1:");
    Serial.println(motora.motorspeed1); 
    Serial.print(">motorspeed2:");
    Serial.println(motora.motorspeed2);
    Serial.print(">motorspeed3:");
    Serial.println(motora.motorspeed3);
    Serial.print(">motorspeed4:");
    Serial.println(motora.motorspeed4);
}