//to separate even and odd numbers from a list of numbers provided by user
#include<stdio.h>
void main()
{
    int n, a[50];
    int e=0,o=0,i;
    printf("how many numbers do you wanna enter?:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter number:");
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if((a[i]%2)==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf(" No of even no. are:%d \n No of odd no. are:%d",e,o);
}