//to find the sum of digits of a multi-digit number until the final sum is single digit
//for example: if input is 455 then 4+5+5=14 and 1+4=5, 5 must be the final answer
#include<stdio.h>
void main()
{
    int n, s=0, r,ss=0;
    printf("enter multidigit number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n % 10;
        s=s+r;
        n=n/10;
    }
  while(s!=0)
        {
            r=s%10;
            ss=ss+r;
            s=s/10;
        }
        printf("final sum:%d",ss);
}