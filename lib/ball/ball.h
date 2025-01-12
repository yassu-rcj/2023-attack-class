#ifndef BALL_H
#define BALL_H
#include <Arduino.h>
#include <timer.h>
#include <set.h>
#include <math.h>
#include <MA.h>
class Ball
{
public:
    int ball1, ball2, ball3, ball4, ball5, ball6, ball7, ball8, ball9, ball10, ball11, ball12, ball13, ball14, ball15, ball16;
    float x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, deg_old, ret;
    int ba[16] = {ball1, ball2, ball3, ball4, ball5, ball6, ball7, ball8, ball9, ball10, ball11, ball12, ball13, ball14, ball15, ball16};
    float x[5] = {x1, x2, x3, x4, x5};
    float y[5] = {y1, y2, y3, y4, y5};
    const int rev_value_r = 1;   // 補正値
    const int rev_value_deg = 1; // 補正値
    float deg_pro, r_pro;        // 北から時計回りに変換した値（方位角)
    float deg_notpro, r_notpro;  // 東から反時計回り(仰角)
    float ball_deg_pro();
    float ball_r_pro();
    void sort();
    void ba_val();
    float ball_deg_notpro();
    float ball_r_notpro();
    int val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val16;
    int val[16] = {val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13, val14, val15, val16};
    MAandRingBufa degree;
    MAandRingBufa distance;
    Ball();
};
#endif