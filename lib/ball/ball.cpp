#include <ball.h>
#include <timer.h>
#define pi 3.141592653
int ass=0;
int bss=0;
int css=0;
Ball::Ball()
{
}
void Ball::ba_val()
{
  timer timer1;
  for (int i = 0; i < 16; i++)
  {
    ba[i] = 0;
  }
  val1 = digitalRead(10);  // 28 10
  val2 = digitalRead(17);  // 27 17
  val3 = digitalRead(18);  // 18
  val4 = digitalRead(29);  // 17 27
  val5 = digitalRead(28);  // 10 28
  val6 = digitalRead(27);  // 11 27
  val7 = digitalRead(26);  // 14 26
  val8 = digitalRead(25);  // 15 25
  val9 = digitalRead(24);  // 16 24
  val10 = digitalRead(23); // 19  23
  val11 = digitalRead(22); // 22 22
  val12 = digitalRead(19); // 23 19
  val13 = digitalRead(16); // 24 16
  val14 = digitalRead(15); // 25 15
  val15 = digitalRead(14); // 26 14
  val16 = digitalRead(11); // 27 11
  val[0] = val1;
  val[1] = val2;
  val[2] = val3;
  val[3] = val4;
  val[4] = val5;
  val[5] = val6;
  val[6] = val7;
  val[7] = val8;
  val[8] = val9;
  val[9] = val10;
  val[10] = val11;
  val[11] = val12;
  val[12] = val13;
  val[13] = val14;
  val[14] = val15;
  val[15] = val16;

  for (int w = 0; w < 200; w++)
  {
    for (int i = 0; i < 16; i++)
    {
      if (val[i] == 0)
      {
        ba[i] = ba[i] + 1;
      }
      else
      {
        ba[i] = ba[i];
      }
    }
    val1 = digitalRead(10);  // 28 10
    val2 = digitalRead(17);  // 27 17
    val3 = digitalRead(18);  // 18
    val4 = digitalRead(29);  // 17 27
    val5 = digitalRead(28);  // 10 28
    val6 = digitalRead(27);  // 11 27
    val7 = digitalRead(26);  // 14 26
    val8 = digitalRead(25);  // 15 25
    val9 = digitalRead(24);  // 16 24
    val10 = digitalRead(23); // 19  23
    val11 = digitalRead(22); // 22 22
    val12 = digitalRead(19); // 23 19
    val13 = digitalRead(16); // 24 16
    val14 = digitalRead(15); // 25 15
    val15 = digitalRead(14); // 26 14
    val16 = digitalRead(11); // 27 11

    /*  int val1 = digitalRead(10);
        int val2 = digitalRead(17);
        int val3 = digitalRead(18);
        int val4 = digitalRead(29);
        int val5 = digitalRead(28);
        int val6 = digitalRead(27);
        int val7 = digitalRead(26);
        int val8 = digitalRead(25);
        int val9 = digitalRead(24);  // 1
        int val10 = digitalRead(23); // 16
        int val11 = digitalRead(22);
        int val12 = digitalRead(19);
        int val13 = digitalRead(16);
        int val14 = digitalRead(15);
        int val15 = digitalRead(14);
        int val16 = digitalRead(11);*/
    val[0] = val1;
    val[1] = val2;
    val[2] = val3;
    val[3] = val4;
    val[4] = val5;
    val[5] = val6;
    val[6] = val7;
    val[7] = val8;
    val[8] = val9;
    val[9] = val10;
    val[10] = val11;
    val[11] = val12;
    val[12] = val13;
    val[13] = val14;
    val[14] = val15;
    val[15] = val16;
   
    ball1 = ba[0];
    ball2 = ba[1] ;
    ball3 = ba[2] ;
    ball4 = ba[3];
    /*ba[3]=ba[3]-30;
    ball4 = ba[3];*/
    ball5 = ba[4];
    ball6 = ba[5];
    ball7 = ba[6];
    ball8 = ba[7];
    ball9 = ba[8];
    ball10 = ba[9];
    ball11 = ba[10];
    ball12 = ba[11];
    ball13 = ba[12];
    ball14 = ba[13];
    ball15 = ba[14]; 
    ball16 = ba[15];
     /* ba[14]=ba[14]+30;
    ball15=ba[14];
    */
      }
}
void Ball::sort()
{
  Set::bubble_sort(16, ba);

  for (int n = 15; n > 10; n--)
  {
    if (ba[n] == ball1)
    { // 90
    if(n==15){
ass=1;
      Serial.print(">1:");
      Serial.println(15 - n);
      x[15 - n] += 1;
      y[15 - n] = 0;
      /*x[15 - n] = ball1;
      y[15 - n] = 0; */
    }else{
    
      Serial.print(">1:");
      Serial.println(15 - n);
      x[15 - n] += 1;
      y[15 - n] = 0;
      /*x[15 - n] = ball1;
      y[15 - n] = 0; */
    }
    
    }
    else if (ba[n] == ball2)
    { // 67.5
    if(n==15){
bss=1;
      Serial.print(">2:");
      Serial.println(15 - n);

      /*x[15 - n] = 0.3826834 * ball2;
      y[15 - n] = 0.9238795 * ball2;*/
      x[15 - n] += 0.3826834;
      y[15 - n] += 0.9238795;
    }else{
       Serial.print(">2:");
      Serial.println(15 - n);

      /*x[15 - n] = 0.3826834 * ball2;
      y[15 - n] = 0.9238795 * ball2;*/
      x[15 - n] += 0.3826834;
      y[15 - n] += 0.9238795;
    }
    
    }
    else if (ba[n] == ball3)
    { // 45
      Serial.print(">3:");
      Serial.println(15 - n);
      /*
      x[15 - n] = 0.7071067 * ball3;
      y[15 - n] = 0.7071067 * ball3;
      */
      x[15 - n] += 0.7071067;
      y[15 - n] += 0.7071067;
    }
    else if (ba[n] == ball4)
    { // 22.5
      Serial.print(">4:");
      Serial.println(15 - n);
     /* x[15 - n] = 0.92387953 * ball4;
      y[15 - n] = 0.3826834 * ball4; */
      x[15 - n] += 0.92387953;
      y[15 - n] += 0.3826834;
    }
    else if (ba[n] == ball5)
    { // 0
      Serial.print(">5:");
      Serial.println(15 - n);
      /*
      x[15 - n] = ball5;
      y[15 - n] = 0;
      */
      x[15 - n] += 1;
      y[15 - n] += 0;
    }
    else if (ba[n] == ball6)
    { // 337.5
      Serial.print(">6:");
      Serial.println(15 - n);
     /* x[15 - n] = 0.9238795 * ball6;
      y[15 - n] = -0.3826834 * ball6;
      */
      x[15 - n] += 0.9238795;
      y[15 - n] -= 0.3826834;
    }
    else if (ba[n] == ball7)
    { // 315
      Serial.print(">7:");
      Serial.println(15 - n);
     /* x[15 - n] = 0.7071067 * ball7;
      y[15 - n] = -0.7071067 * ball7;
      */
      x[15 - n] += 0.7071067;
      y[15 - n] -= 0.7071067;
    }
    else if (ba[n] == ball8)
    { // 292.5
      Serial.print(">8:");
      Serial.println(15 - n);
      /*
      x[15 - n] = 0.38268343 * ball8;
      y[15 - n] = -0.9238795 * ball8;
*/
      x[15 - n] += 0.38268343;
      y[15 - n] -= 0.9238795;
    }
    else if (ba[n] == ball9)
    { // 270
      Serial.print(">9:");
      Serial.println(15 - n);
      /*
      x[15 - n] = 0;
      y[15 - n] = -1 * ball9;
      */
      x[15 - n] += 0;
      y[15 - n] -= 1;
    }
    else if (ba[n] == ball10)
    { // 247.5
      Serial.print(">10:");
      Serial.println(15 - n);
      /*
      x[15 - n] = -0.3826834 * ball10;
      y[15 - n] = -0.9238795 * ball10;
      */
      x[15 - n] -= 0.3826834;
      y[15 - n] -= 0.9238795;
    }
    else if (ba[n] == ball11)
    { // 225
      Serial.print(">11:");
      Serial.println(15 - n);
      /*
      x[15 - n] = -0.7071067 * ball11;
      y[15 - n] = -0.7071067 * ball11;
      */
      x[15 - n] -= 0.7071067;
      y[15 - n] -= 0.7071067;
    }
    else if (ba[n] == ball12)
    { // 202.5
      Serial.print(">12:");
      Serial.println(15 - n);
      /*
      x[15 - n] = -0.9238795 * ball12;
      y[15 - n] = -0.3826834 * ball12;
      */
      x[15 - n] -= 0.9238795;
      y[15 - n] -= 0.3826834;
    }
    else if (ba[n] == ball13)
    { // 180
      Serial.print(">13:");
      Serial.println(15 - n);
      /*
      x[15 - n] = -1 * ball13;
      y[15 - n] = 0;*/
      x[15 - n] -= 1;
      y[15 - n] += 0;
    }
    else if (ba[n] == ball14)
    { // 157.5
      Serial.print(">14:");
      Serial.println(15 - n);
      /*
      x[15 - n] = -0.9238795 * ball14;
      y[15 - n] = 0.3826834 * ball14;
      */
      x[15 - n] -= 0.9238795;
      y[15 - n] += 0.3826834;
    }
    else if (ba[n] == ball15)
    { // 135
      Serial.print(">15:");
      Serial.println(15 - n);
      /*
      x[15 - n] = -0.7071067 * ball15;
      y[15 - n] = 0.7071067 * ball15;
      */
      x[15 - n] -= 0.7071067;
      y[15 - n] += 0.7071067;
    }
    else if (ba[n] == ball16)
    { // 112.5
    if(n==15){
 Serial.print(">16:");
      Serial.println(15 - n);
      /*
      x[15 - n] = -0.3826834 * ball16;
      y[15 - n] = 0.9238795 * ball16;
      */
      x[15 - n] -= 0.3826834;
      y[15 - n] += 0.9238795;
      css=1;
    }else{
       Serial.print(">16:");
      Serial.println(15 - n);
      /*
      x[15 - n] = -0.3826834 * ball16;
      y[15 - n] = 0.9238795 * ball16;
      */
      x[15 - n] -= 0.3826834;
      y[15 - n] += 0.9238795;
    }
     
    }
  }
}
float Ball::ball_deg_pro() // deg_proは方位角
{
  ba_val();
  sort();
if(ass==1){
  deg_notpro=1;
   x[0]=0;
  x[1]=0;
  x[2]=0;
  x[3]=0;
  x[4]=0;
  y[0]=0;
  y[1]=0;
  y[2]=0;
  y[3]=0;
  y[4]=0;
  ass=0;
  css=0;
  return deg_notpro;
}
else if(css==1){
   deg_notpro=337;
   x[0]=0;
  x[1]=0;
  x[2]=0;
  x[3]=0;
  x[4]=0;
  y[0]=0;
  y[1]=0;
  y[2]=0;
  y[3]=0;
  y[4]=0;
  ass=0;
  css=0;
  return deg_notpro;
}
else if(bss==1){
   deg_notpro=22;
   x[0]=0;
  x[1]=0;
  x[2]=0;
  x[3]=0;
  x[4]=0;
  y[0]=0;
  y[1]=0;
  y[2]=0;
  y[3]=0;
  y[4]=0;
  ass=0;
  css=0;
  bss=0;
  return deg_notpro;
}
else{
 ret = atan2f(y[0] + y[1] + y[2] + y[3] + y[4], x[0] + x[1] + x[2] + x[3] + x[4]);
  ret = Set::degfunc4(ret);
  deg_old = ret * rev_value_deg;
  // deg_pro = Set::degfunc2(deg_old); // 一時的に移動平均を抜かしている
  deg_notpro = degree.entervalue(Set::degfunc2(deg_old));
  x[0]=0;
  x[1]=0;
  x[2]=0;
  x[3]=0;
  x[4]=0;
  y[0]=0;
  y[1]=0;
  y[2]=0;
  y[3]=0;
  y[4]=0;
  return deg_notpro;
}
 
}
float Ball::ball_r_pro()
{
  ba_val();
  sort();
  float r = sqrtf(((x[0] + x[1] + x[2] + x[3] + x[4]) * (x[0] + x[1] + x[2] + x[3] + x[4])) + ((y[0] + y[1] + y[2] + y[3] + y[4]) * (y[0] + y[1] + y[2] + y[3] + y[4])));
  r_notpro = distance.entervalue(r) * rev_value_r;
  r_pro = r; // いちじてきにいどうへいきんぬかしているよ
  return r_pro;
}

float Ball::ball_deg_notpro() // degは仰角
{
  ba_val();
  sort();
  ret = atan2f(x1 + x2 + x3 + x4 + x5, y1 + y2 + y3 + y4 + y5);
  deg_old = (180 / pi) * ret * rev_value_deg;
  deg_notpro = degree.entervalue(deg_old);
  deg_pro = Set::degfunc2(deg_old);
  return deg_notpro;
}
float Ball::ball_r_notpro()
{
  ba_val();
  sort();
  float r = sqrtf(((x[0] + x[1] + x[2] + x[3] + x[4]) * (x[0] + x[1] + x[2] + x[3] + x[4])) + ((y[0] + y[1] + y[2] + y[3] + y[4]) * (y[0] + y[1] + y[2] + y[3] + y[4])));
  r_notpro = distance.entervalue(r) * rev_value_r;
  r_pro = r;
  return r_notpro;
}
void Ball()
{
}