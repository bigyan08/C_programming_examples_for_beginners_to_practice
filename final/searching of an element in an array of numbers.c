#include<stdio.h>
void main()
{
    int i,n,a[100],b,c=0;
    printf("how many numbers do you wanna enter:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter number here:");
        scanf("%d",&a[i]);
    }
    printf("enter the element which you wanna find:");
    scanf("%d",&b);
    for(i=1;i<=n;i++)
    {
        if(a[i]==b)
        {
       c++;
        }
    }
    if(c!=0)
    {
        printf("it is in the list");

    }
    else{
        printf("it is not in the list");
    }
}