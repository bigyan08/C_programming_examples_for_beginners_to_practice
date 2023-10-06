//sorting list of user entered numbers in descending order
#include<stdio.h>
void main()
{
    int a[10];
    int j,i,t;
    for(i=0;i<10;i++)
    {
        printf("enter number here:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[j]>a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\n sorted list:");
    for(j=0;j<10;j++)
    {
        printf("%d ",a[j]);
    }
}