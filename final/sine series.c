//sine series (sum)
#include<stdio.h>
void main()
{
   float x, xdeg,a,s;
   int i;
   printf("enter value of x in degree:");
   scanf("%f",&xdeg);
   x= xdeg * (3.14/180);
   s=a=x;
   for(i=1;i<10;i++)
   {
    a= -a * x*x /((2*i)*(2*i+1));
    s=s+a;
   }
   printf("SIN(%.2f)=%.2f",xdeg,s);
}