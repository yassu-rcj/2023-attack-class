#include <set.h>
void SET::swap(int *pa, int *pb){
  int tmp;
 
  tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}
 void SET::bubble_sort(int n, int a[]){
int i, j;
  for (i = 0; i < n; i++) {
    for (j = 1; j < n - i; j++) {
      if (a[j] < a[j - 1]) {
        swap(&a[j], &a[j - 1]);
      }
    }
  }
}
float SET::degfunc(float tardeg){
  if (tardeg <180) {
    return 2*tardeg;
  } else  (tardeg >=180);{
    if (tardeg +90 >360){
      return (tardeg+90)-360;
    }else {
      return tardeg+90;
    }
  }
}
float SET::degfunc2(float b){
 if ((0<b) && (b<=90)){
  b=90-b;
 } else if ((90<b) && (b<=180)){
  b=360-b;
 } else if ((180<b) && (b<=270)){
  b=450-b;
 } else if ((270<b)&& (b<=360)){
  b=450-b;
 }
 else if (b==0){
  b=360;
 }
 return b;
}
void SET::pin(){

}
SET::SET(){
    
}