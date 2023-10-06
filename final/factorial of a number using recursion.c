//factorial of a number using recursion
#include<stdio.h>
int fact(int n);
int main()
{
    int n,result;
    printf("enter any number:");
    scanf("%d",&n);
    result=fact(n);
    printf("The factorial of the given number is:%d",result);
    return 0;
}
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}