//PROGRAM TO FIND IMPLEMENT SIMPSONS 3/8 RULE 
//NAME: Daksh Semwal
//SEC: A|ROLL NO: -38
//COURSE: B. Tech   BRANCH:CS
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
      return 1/(1+(x*x));
      }

int main()
{
    float high,low,h,l=0,sum=0,t=0;     
    int i,n;            
  printf("\n\t\t****Simpson 3/8 Rule****\n\n");
    printf("enter the no of sub interval:");
    scanf("%d",&n);
  
    printf("\nenter the low interval:");
    scanf("%f",&low);
    printf("\nenter the high interval:");
    scanf("%f",&high);
 
    h=(high-low)/n;
    sum=sum+f(high)+f(low);
     for(i=1;i<n;i++)
     {
       if(i%3==0)
         {
         l=l+f(low+(i*h));
          }
       else
         {
         t=t+f(low+(i*h));
          }
     }
            sum=sum+(2*l)+(3*t);
            sum=sum*((3.0*h)/8);
        printf("\nsum is%f",sum);               

 getch();
 return 0;
}    

