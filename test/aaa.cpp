#define IN1mo1 2
#define IN2mo1 3
#define IN1mo2 4
#define IN2mo2 5
#define IN1mo3 6
#define IN2mo3 7
#define IN1mo4 8
#define IN2mo4 9
#include <Arduino.h>
void setup(){
    
}
void loop(){
    analogWrite(IN1mo1,200);
    analogWrite(IN2mo1,0);
    analogWrite(IN1mo2,200);
    analogWrite(IN2mo2,0);
    analogWrite(IN1mo3,200);
    analogWrite(IN2mo3,0);
    analogWrite(IN1mo4,200);
    analogWrite(IN2mo4,0);
    
    delay(100);
  
  
}