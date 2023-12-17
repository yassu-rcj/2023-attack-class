#include <ball.h>
#include <timer.h>
#include <set.h>
#include <Arduino.h>
void BALL::ba_val(){
timer timer1;
  int val1= PINA & _BV(6);
  int val2= PINC & _BV(7);
  int val3= PINL & _BV(7);
  int val4= PINE & _BV(5);
  int val5= PINC & _BV(2);
  int val6= PINC & _BV(6);
  int val7= PINA & _BV(7);
  int val8= PINA & _BV(3);
  int val9= PINA & _BV(1);
  int val10= PIND & _BV(0);
  int val11= PIND & _BV(2);
  int val12= PINH & _BV(0);
  int val13= PINJ & _BV(0);
  int val14= PINL & _BV(7);
  int val15= PINC & _BV(7);
  int val16= PINA & _BV(6);
  int val[]={val1,val2,val3,val4,val5,val6,val7,val8,val9,val10,val11,val12,val13,val14,val15,val16};
  timer1.reset();
  unsigned long i=timer1.read_us();
if (i<844){
 for (int i=0; i<=15; i++){
  if (val[i]==0){
    ba[i]=ba[i]+1;
  }else{
    ba[i]=ba[i];
  }
    }
}else{//リセット
for (int i = 0; i < 16; i++) {
     ba[i] = 0;
}
}