#ifndef SET_H
#define SET_H
#include <math.h>
class Set
{
public:
    static void bubble_sort(int n, int a[]);
    static void swap(int *pa, int *pb);
    static float degfunc(float tardeg);
    static float degfunc2(int b);   // 方位角から仰角
    static float degfunc3(int deg); // 方位角から仰角
    static float vector_opo_deg(float, float);
    static float vector_opo_r(float, float);
    static float vectodeg(float, float); // 仰角
    static float vectodis(float, float);
};
#endif