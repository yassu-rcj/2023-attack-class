#include <Arduino.h>
#include <timer.h>
void ba_val();
int ball1, ball2, ball3, ball4, ball5, ball6, ball7, ball8, ball9, ball10, ball11, ball12, ball13, ball14, ball15, ball16;
int ba[] = {ball1, ball2, ball3, ball4, ball5, ball6, ball7, ball8, ball9, ball10, ball11, ball12, ball13, ball14, ball15, ball16};
void setup()
{
    Serial.begin(230400);
}
void loop()
{
    ba_val();
    Serial.print(">a:");
    Serial.println(ba[0]);
}
void ba_val()
{
    timer timer1;
    for (int i = 0; i < 16; i++)
    {
        ba[i] = 0;
    }
    int val1 = digitalRead(28);
    int val2 = digitalRead(29);
    int val3 = digitalRead(18);
    int val4 = digitalRead(17);
    int val5 = digitalRead(10);
    int val6 = digitalRead(11);
    int val7 = digitalRead(14);
    int val8 = digitalRead(15);
    int val9 = digitalRead(16);
    int val10 = digitalRead(19); // 16
    int val11 = digitalRead(22);
    int val12 = digitalRead(23);
    int val13 = digitalRead(24);
    int val14 = digitalRead(25);
    int val15 = digitalRead(26);
    int val16 = digitalRead(27);

    int val[] = {val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val16};

    for (int w = 0; w < 166; w++)
    {
        for (int i = 0; i <= 15; i++)
        {
            if (val[i] == 0)
            {
                ba[i] = ba[i] + 1;
            }
            else
            {
                ba[i] = ba[i];
            }
        }
        int val1 = digitalRead(28);
        int val2 = digitalRead(29);
        int val3 = digitalRead(18);
        int val4 = digitalRead(17);
        int val5 = digitalRead(10);
        int val6 = digitalRead(11);
        int val7 = digitalRead(14);
        int val8 = digitalRead(15);
        int val9 = digitalRead(16);
        int val10 = digitalRead(19); // 16
        int val11 = digitalRead(22);
        int val12 = digitalRead(23);
        int val13 = digitalRead(24);
        int val14 = digitalRead(25);
        int val15 = digitalRead(26);
        int val16 = digitalRead(27);

        /*  int val1 = digitalRead(10);
            int val2 = digitalRead(17);
            int val3 = digitalRead(18);
            int val4 = digitalRead(29);
            int val5 = digitalRead(28);
            int val6 = digitalRead(27);
            int val7 = digitalRead(26);
            int val8 = digitalRead(25);
            int val9 = digitalRead(24);  // 1
            int val10 = digitalRead(23); // 16
            int val11 = digitalRead(22);
            int val12 = digitalRead(19);
            int val13 = digitalRead(16);
            int val14 = digitalRead(15);
            int val15 = digitalRead(14);
            int val16 = digitalRead(11);*/
        val[0] = val1;
        val[1] = val2;
        val[2] = val3;
        val[3] = val4;
        val[4] = val5;
        val[5] = val6;
        val[6] = val7;
        val[7] = val8;
        val[8] = val9;
        val[9] = val10;
        val[10] = val11;
        val[11] = val12;
        val[12] = val13;
        val[13] = val14;
        val[14] = val15;
        val[15] = val16;
        ball1 = ba[0];
        ball2 = ba[1];
        ball3 = ba[2];
        ball4 = ba[3];
        ball5 = ba[4];
        ball6 = ba[5];
        ball7 = ba[6];
        ball8 = ba[7];
        ball9 = ba[8];
        ball10 = ba[9];
        ball11 = ba[10];
        ball12 = ba[11];
        ball13 = ba[12];
        ball14 = ba[13];
        ball15 = ba[14];
        ball16 = ba[15];
    }
}