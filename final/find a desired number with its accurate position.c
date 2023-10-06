//wap to enter some numbers and diplay them and find a desired number with its accurate position
#include<stdio.h>
void main()
{
    int a[100],i,n,b;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter no:");
        scanf("%d",&a[i]);
    }
    printf("the entered numbers are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n Search for a number(enter number here):");
    scanf("%d",&b);
    for(i=1;i<=n;i++)
    {
        if(a[i]==b)
        {
            printf("The number is in the list\n");
            printf("The number is in position:%d",i);
            break;
        }
    }
}