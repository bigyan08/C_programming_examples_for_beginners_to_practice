#include<stdio.h>
void main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    int c=0;
    for(i=1;i<=n;i++)
    {
        if((n%i)==0)
        {
            c++;
        }
    }
    if(c<=2)
    {
        printf("%d is prime number",n);

    }
    else{
        printf("%d is not prime",n);
    }
    
}