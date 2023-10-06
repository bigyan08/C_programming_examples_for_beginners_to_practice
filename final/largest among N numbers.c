//find the largest number among a list of user entered numbers
#include<stdio.h>
void main()
{
    int a[50];
    int i,n,largest;
    printf("how many numbers do you wanna enter?(upto 50):");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter number:");
        scanf("%d",&a[i]);
    }
    largest=a[1];
    for(i=2;i<=n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("the largest number is :%d",largest);
}