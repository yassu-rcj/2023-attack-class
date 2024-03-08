#include <MA.h>
void MAandRingBufa::setlength(int length){
    this->length=length;
}
float MAandRingBufa::entervalue(float value) {
   sum -= record[count];
  record[count] = value;
    sum += value;
   average = sum / length;
    count = (count + 1) % length;
    return average;
}
void MAandRingBufa::SumOfArray(){
    for(int i=0;i<=20;i++){
        sum=sum+record[i];
    }
}

