//sum of n numbers using recursion
#include<stdio.h>
int sum(int);
int main()
{
    int n,s;
    printf("enter the value of n:");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum of n numbers:%d",s);
}
int sum(int n)
{
   if(n==1)
    return 1;
   
   else
    return n+sum(n-1);
   
}