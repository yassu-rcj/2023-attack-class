#include <math.h>
#include <Arduino.h>
#define pi 3.141592653
float a, b;
void setup()
{
    Serial.begin(9600);
}
void loop()
{
    a = sin(45);
    b = sin(-45);
    Serial.print(a);
    Serial.print(" ");
    Serial.println(b);
}