#include <set.h>
#include <Arduino.h>
void setup(){
Serial.begin(115200);
}
void loop(){
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    Set::bubble_sort(10, a);
    Serial.println("Sorted array: ");
    Serial.println(a[0]);
    Serial.println(a[1]);
    Serial.println(a[2]);
    Serial.println(a[3]);
    Serial.println(a[4]);
    Serial.println(a[5]);
    Serial.println(a[6]);
    Serial.println(a[7]);
    Serial.println(a[8]);
    Serial.println(a[9]);


}