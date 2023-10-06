//fibonacci using recursion
#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("enter upto how many terms you wanna print:");
    scanf("%d",&n);
    fib(n);
}
int fib(int n)
{
    int a=1,b=1,c=1;
    printf("%d ",b);
    for(int i=1;i<n;i++)
    {
        printf("%d ",c);
        c=a+b;
        a=b;
        b=c;
    }
}