#include <Arduino.h>
#include <timer.h>
#include <set.h>
class BALL{
private:
int ball1,ball2,ball3,ball4,ball5,ball6,ball7,ball8,ball9,ball10,ball11,ball12,ball13,ball14,ball15,ball16;
float x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,r,deg;
int ba[16]={ball1,ball2,ball3,ball4,ball5,ball6,ball7,ball8,ball9,ball10,ball11,ball12,ball13,ball14,ball15,ball16};
float x[5]={x1,x2,x3,x4,x5};
float y[5]={y1,y2,y3,y4,y5};
const int rev_value=1; //補正値
public:
float ball_deg();
float ball_r();
void sort();
void ba_val();
};

