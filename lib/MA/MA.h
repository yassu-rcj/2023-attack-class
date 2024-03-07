#ifndef MA_INCLUDE
#define MA_INCLUDE
class MAandRingBufa{
private:
int length;
float record[20];
int count=-1;
int times=0;
int top,bottom=0;
float average=0;
float sum=0;
public:
void setlength(int);
float entervalue(float);
void movingaverage();
float returnAve();
void reset();
void SumOfArray();
};
#endif