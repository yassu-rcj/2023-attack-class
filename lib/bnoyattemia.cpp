#include <bno.h>
#include <Arduino.h>
Bno bno;
void setup()
{
    bno.Bnoc();
}
void loop()
{

    bno.get_bno_data();
    Serial.println(bno.deg_body);
}