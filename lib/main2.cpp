#include <Arduino.h>
#include <bno.h>
float val1, val2;
Bno bno1;
void setup()
{
    Serial.begin(230400);
}
void loop()
{
    bno1.get_bno_data();
    val1 = bno1.deg_body;
    Serial.print(">a:");
    Serial.println(val1);
}