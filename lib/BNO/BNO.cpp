#include <Arduino.h>
#include <BNO.h>
BNO::BNO()
{
    pinMode(21, INPUT_PULLUP); // SDA 21番ピンのプルアップ(念のため)
    pinMode(22, INPUT_PULLUP); // SDA 22番ピンのプルアップ(念のため)
}
BNO::get_bno_data() // deg_bodyは方位角
{
    deg_body = gyroscope.z();
}