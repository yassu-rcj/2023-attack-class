#include <MA.h>
void MAandRingBufa::setlength(int length){
    this->length=length;
}
float MAandRingBufa::entervalue(float value){
    this->count++;
    if(count<length){
record[count]=value;
    average=sum/(count+1);
    return average;
    }else{
     else if(count==21){
        count==0;
        average=((sum-record[0])/21)+(value/21);
     }



    }
}
void MAandRingBufa::SumOfArray(){
    for(int i=0;i<=20;i++){
        sum=sum+record[i];
    }
}