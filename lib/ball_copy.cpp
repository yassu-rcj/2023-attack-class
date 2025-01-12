#include <Arduino.h>
#define pin 29

// 　これがピン番号
int b, c;
unsigned long time_new;
void setup()
{

  Serial.begin(57600);
  pinMode(pin, INPUT);
}
void loop()
{
  for (int i = 0; i < 1000; i++)
  {
    b = digitalRead(pin); // ここはhttps://ht-deko.com/arduino/portregisters.html　  PIN〇 & _BV(数字);
    if (b == 0)
    {
      c++;
    }
    else
    {
      c = c;
    }
  }
  Serial.print(">ball:");
  Serial.println(c);
  c = 0;
}
