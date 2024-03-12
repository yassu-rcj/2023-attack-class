#include <bno.h>
Bno::Bno()
{
    pinMode(21, INPUT_PULLUP); // SDA 21番ピンのプルアップ(念のため)
    pinMode(22, INPUT_PULLUP); // SDA 22番ピンのプルアップ(念のため)
}
void Bno::get_bno_data(void) // deg_bodyは方位角
{
    deg_body = gyroscope.z();
}