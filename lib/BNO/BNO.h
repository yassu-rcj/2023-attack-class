#ifndef BNO_H
#define BNO_H
#include <Arduino.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
#include <Wire.h>
class Bno
{
private:
    Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28);
    imu::Vector<3> gyroscope = bno.getVector(Adafruit_BNO055::VECTOR_GYROSCOPE);

public:
    Bno();
    float deg_body;
    void get_bno_data();
};
#endif