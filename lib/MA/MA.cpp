#include <MA.h>
#define n 5
void MAandRingBufa::setlength(int length)
{
    this->length = length;
}
float MAandRingBufa::entervalue(float value)
{
    this->count++;
    if (times == 0)
    {
        if (count <= 20)
        {
            record[count] = value;
            average = sum / (count + 1);
            return average;
        }
        else if (count == 21)
        {
            count = 0;
            average = ((sum - record[0]) / 21) + (value / 21);
            times++;
            return average;
        }
        else
        {
            Serial.begin(9600);
            Serial.println("error");
            return -1;
        }
    }
    else if (1 <= times || times <= length)
    {
        if (count <= 20)
        {
            average = ((sum - record[count]) / 21) + (value / 21);
            return average;
        }
        else
        {
            count = 0;
            average = ((sum - record[0]) / 21) + (value / 21);
            times++;
            return average;
        }
    }
    else
    {
        if (count <= 20)
        {
            average = ((sum - record[count]) / 21) + (value / 21);
            MAandRingBufa::reset();
            return average;
        }
        else
        {
            count = 0;
            average = ((sum - record[0]) / 21) + (value / 21);
            times++;
            MAandRingBufa::reset();
            return average;
        }
    }
}
void MAandRingBufa::SumOfArray()
{
    for (int i = 0; i <= 20; i++)
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
    for (int i = 0; i <= 20; i++)
    {
        this->record[i] = 0.0;
    }
}