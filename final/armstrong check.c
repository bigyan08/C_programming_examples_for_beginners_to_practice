#include<stdio.h>
#include<conio.h>
int main()
{
    //wap to check if the given number is armstrong or not
    int n,r,s=0,a;
    printf("enter any multidigit number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        r=n % 10;
        s=(r^3)+s;
        n=n/10;
    }
    if (s==a)
    {
        printf("%d is armstrong",a);
    }
    else{
        printf("%d is not armstrong",a);
    }
    return 0;
}