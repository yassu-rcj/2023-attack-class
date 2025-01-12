#ifndef BNO_H
#define BNO_H
#include <Arduino.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
#include <Wire.h>
#include <SPI.h>
class Bno
{
private:
public:
    Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
    void Bnoc();
    float deg_body;
    void get_bno_data();
};
#endif