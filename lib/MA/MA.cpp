#include <MA.h>
void MAandRingBufa::setlength(int length){
    this->length=length;
}
float MAandRingBufa::entervalue(float value){
    this->count++;
    if (times==0){
  if(count<=20){
 record[count]=value;
    average=sum/(count+1);
    return average;
    }else{
     else if(count==21){
        count==0;
        average=((sum-record[0])/21)+(value/21);
        times++;
        return average;
     }
    }
    }else{
       if (count<=20){
        average=((sum-record[count])/21)+(value/21);
        return average;
       }else {
        count==0;
        average=((sum-record[0])/21)+(value/21);
        times++;
        return average;
       }
    }
}
void MAandRingBufa::SumOfArray(){
    for(int i=0;i<=20;i++){
        sum=sum+record[i];
    }
}
float MAandRingBufa::entervalue(float value) {
   sum -= record[count];
  record[count] = value;
    sum += value;
   average = sum / length;
    count = (count + 1) % length;
    return average;
}
