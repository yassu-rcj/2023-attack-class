#include <Arduino.h>
#include <motor.h>
#include <bno.h>
Bno bno;
Motor motora;

void setup()
{
    bno.Bnoc();
}
void loop()
{
    bno.get_bno_data();
    Serial.println(bno.deg_body);
}