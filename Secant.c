/* Program to find roots of a quardratic equation using Secant method*/
/*Name:-Daksh Semwal
  Btech CSE 4 th sem SEC A
  Roll No:-38
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
   return ((x*x*x*x*x)-(4*x*x*x*x)-(9*x*x*x)+(12*x*x)+15*x);
}
int main()
{
    printf("|**************************************SECANT METHOD********************************************|\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    int i;
    float x,a,b,t,y;
    x=1;
    while(1)
    {
        if(f(x)*(f(x+1))<0)
       {
         a=x;
         b=x+1;
         break;
       }
       x++;
    }
    printf("|************************************Intital Roots Are******************************************|\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("|i\t    a\t            b\t           F(a)\t           F(b)\t          (t-x)\t         x(root)|\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    i=1,t=0;
    while(1)
    {
      if(i!=1)
      t=x;
      x=(b-(b-a)/(f(b)-f(a))*f(b));
      if(f(x)==0)
      {
        printf("Final Root =%f",x);
        break;
      }
      if(f(a)*f(b)<0)
      b=x;
      else
      a=x;
      y=fabs(t-x);
      printf("|%d\t%f\t%f\t%f\t%f\t%f\t%f|\n",i,a,b,f(a),f(b),y,x);
      printf("-------------------------------------------------------------------------------------------------\n");
      if(y<=0.0001)
      {
        printf("|                                                                          |Final Root =%f|\n",x);
        printf("-------------------------------------------------------------------------------------------------\n");
        break;
      }                    
      i=i+1;
    }
    getch();
    return 0;
}
