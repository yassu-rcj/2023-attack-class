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
        else
        {
            else if (count == 21)
            {
                count == 0;
                average = ((sum - record[0]) / 21) + (value / 21);
                times++;
                return average;
            }
        }
    }
    else if (1 <= times || times <= n)
    {
        if (count <= 20)
        {
            average = ((sum - record[count]) / 21) + (value / 21);
            return average;
        }
        else
        {
            count == 0;
            average = ((sum - record[0]) / 21) + (value / 21);
            times++;
            return average;
        }
    }
    else
    {
        MAandRingBufa::reset();
    }
}
void MAandRingBufa::SumOfArray()
{
    for (int i = 0; i <= 20; i++)
    {
        sum = sum + record[i];
    }
}

void reset()
{
    count = -1;
    top = 0;
    bottom = 0;
    times = 0;
    for (int i = 0; i <= 20; i++;)
    {
        record[i] = 0;
    }
}