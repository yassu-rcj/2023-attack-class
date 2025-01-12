#define IN1mo1 4
#define IN2mo1 5
#define IN1mo2 6
#define IN2mo2 7
#define IN1mo3 8
#define IN2mo3 9
#define IN1mo4 2
#define IN2mo4 3
#include <Arduino.h>

#define p 90
#define s 10000
void setup()
{
}
void loop()
{
    analogWrite(IN1mo1, 0);
    analogWrite(IN2mo1, p-10);
    analogWrite(IN1mo2, 0);
    analogWrite(IN2mo2, p-10);
    analogWrite(IN1mo3, p-10);
    analogWrite(IN2mo3, 0);
    analogWrite(IN1mo4, p);
    analogWrite(IN2mo4, 0);

    delay(100);

    // 時計回り
}