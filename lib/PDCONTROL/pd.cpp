#include <pd.h>
#include <Arduino.h>
#include <timer.h>
timer timer_a;
int PDcon::P(float NOW, float tardeg)
{
    P_power = (tardeg - NOW) * P_gain;
    return P_power;
}
int PDcon::PD(float tardeg)
{
    if (b == 0)
    {

        Serial.println("PD");
        bno.get_bno_data();
        NOW = bno.deg_body;
        pre_diff = tardeg - NOW;

        timer_a.reset();
        b++;
    }

    if (tardeg + 10 > 360)
    {
        Serial.print("q");
        PDcon::a = tardeg;
        a = a - 360;
        diff = tardeg - NOW;
        int time = timer_a.read_us();
        PD_power = (tardeg - NOW) * P_gain - ((diff - pre_diff) / time) * D_gain;
        pre_diff = diff;
        bno.get_bno_data();
        NOW = bno.deg_body;
        timer_a.reset();
    }
    else
    {
        if (tardeg - 10 < 0)
        {
            Serial.println("a");

            a = tardeg;
            a = a + 360;
            diff = tardeg - NOW;
            int time = timer_a.read_us();
            PD_power = (tardeg - NOW) * P_gain - ((diff - pre_diff) / time) * D_gain;
            pre_diff = diff;
            bno.get_bno_data();
            NOW = bno.deg_body;
            timer_a.reset();
        }
        else
        {
            Serial.println("b");
            diff = tardeg - NOW;
            int time = timer_a.read_us();
            PD_power = (tardeg - NOW) * P_gain - ((diff - pre_diff) / time) * D_gain;
            pre_diff = diff;
            bno.get_bno_data();
            NOW = bno.deg_body;
            Serial.println(NOW);
            timer_a.reset();
        }
    }

    return PD_power;
}