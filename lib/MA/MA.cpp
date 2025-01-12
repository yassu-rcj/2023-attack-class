#include <MA.h>
void MAandRingBufa::setlength(int length)
{
    this->length = length;
}
float MAandRingBufa::entervalue(float value)
{
    this->count++;
    if (count <= abcdef-1)
    {
        record[count] = value;
        MAandRingBufa::SumOfArray();
        average = sum / (count + 1);
        return average;
    }
    else if (count == abcdef)
    {
        count = 0;
        average = ((sum - record[0]) / abcdef) + (value / abcdef);
        MAandRingBufa::reset();
        return average;
    }
    else
    {
        
        Serial.println("error");
        return -1;
    }
}
void MAandRingBufa::SumOfArray()
{
    sum = 0;
    for (int i = 0; i < abcdef; i++)
    {
        sum = sum + record[i];
    }
}

void MAandRingBufa::reset()
{
    this->count = -1;
    this->top = 0;
    this->bottom = 0;
    this->times = 0;
    for (int i = 0; i <= abcdef-1; i++)
    {
        this->record[i] = 0.0;
    }
}