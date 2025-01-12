#include <Arduino.h>
char data;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (Serial.available() > 0)
    {
        data = Serial.read();
        if (data == '1')
        {
            // 実行したい内容
        }
        else
        {
            // 違う時
        }
    }
}