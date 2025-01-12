#include <set.h>

void Set::swap(int *pa, int *pb)
{
  int tmp;
  tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}
void Set::bubble_sort(int n, int a[])
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 1; j < n - i; j++)
    {
      if (a[j] < a[j - 1])
      {
        swap(&a[j], &a[j - 1]);
      }
    }
  }
}
float Set::degfunc(float tardeg)

{ // 北を０度として時計回りの角度
  if (tardeg < 180)
  {
    return 2 * tardeg;
  }
  else
    (tardeg >= 180);
  {
    if (tardeg + 90 > 360)
    {
      return (tardeg + 90) - 360;
    }
    else
    {
      return tardeg + 90;
    }
  }
}
float Set::degfunc2(int b)
{ // 仰角から方位角
  b = b % 360;
  if ((0 <= b) && (b <= 90))
  {
    b = 90 - b;
  }
  else if ((90 < b) && (b <= 180))
  {
    b = 450 - b;
  }
  else if ((180 < b) && (b <= 270))
  {
    b = 450 - b;
  }
  else if ((270 < b) && (b < 360))
  {
    b =
        450 - b;
  }
  return b;
}

float Set::vector_opo_deg(float x, float y)
{
  float deg = degfunc3((atan2f(-1 * y, -1 * x)) * 57.29);
  return deg;
}
float Set::degfunc3(int deg) // 方位角から仰角
{
  deg = deg % 360;
  if ((0 <= deg) && (deg <= 90))
  {
    return 90 - deg;
  }
  else if ((90 < deg) && (deg <= 180))
  {
    return deg + 90;
  }
  else
  {
    return 450 - deg;
  }
}
float Set::vectodeg(float x, float y) // 方位角
{
  float deg = degfunc3((atan2f(y, x) * 57.29));
  return deg;
}
float Set::vectodis(float x, float y)
{
  float r = sqrtf((x * x) + (y * y));
  return r;
}
float Set::degfunc4(float b)
{
  if (b >= 0)
  {
    b = b * 180 / M_PI;
    return b;
  }
  else
  {
    b = b + 2 * M_PI;
    b = b * 180 / M_PI;
    return b;
  }
}