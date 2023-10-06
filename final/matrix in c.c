//wap to store elements in a matrix and print it
#include<stdio.h>
void main()
{
    int a[10][10];
    int i,j;
    int r,c;
    printf("enter row and column:");
    scanf("%d%d",&r,&c);
    printf("enter numbers here\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTERED MATRIX:\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}