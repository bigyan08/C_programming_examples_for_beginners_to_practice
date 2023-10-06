//wap to find the smallest no among n numbers
#include<stdio.h>
void main()
{
    int a[50];
    int i,j,n,small;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter number here:");
        scanf("%d",&a[i]);
    }
    small=a[1];
    for(i=2;i<=n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("Smallest no. is %d",small);
}