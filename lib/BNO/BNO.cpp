#include <bno.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
#include <Wire.h>
#include <SPI.h>
#include <Arduino.h>

void Bno::Bnoc()
{

    pinMode(21, INPUT_PULLUP); // SDA 21番ピンのプルアップ(念のため)
    pinMode(22, INPUT_PULLUP); // SDA 22番ピンのプルアップ(念のため)
    Serial.begin(115200);
    Serial.print("a");
    Serial.print("b");
    Serial.print("c");
    if (!bno.begin()) // センサの初期化
    {
        Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
        while (1)
            ;
    }

    delay(1000);

    /* Display the current temperature */
    int8_t temp = bno.getTemp();
    Serial.print("Current Temperature: ");
    Serial.print(temp);
    Serial.println(" C");
    Serial.println("");

    bno.setExtCrystalUse(false);

    Serial.println("Calibration status values: 0=uncalibrated, 3=fully calibrated");
}
void Bno::get_bno_data(void) // deg_bodyは方位角
{
    imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);
    deg_body = euler.x();
}