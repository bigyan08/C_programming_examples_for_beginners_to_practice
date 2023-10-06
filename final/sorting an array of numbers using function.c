//wap to sort an array using function
#include<stdio.h>
int arr(int n, int a[100]);
int main()
{
    int a[100],i,n,j;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter no here:");
        scanf("%d",&a[i]);
    }
    arr(n,a);

    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
int arr(int n,int a[100])
{
    int t,i,j;
    for(i=1;i<=n-1;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[j]<a[i])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
 
  
}