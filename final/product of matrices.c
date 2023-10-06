// wap to read two 3*3 matrix and multiply them
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3];
    int i,j,k,mult=0;
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter value for a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix B:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter value for b[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("The multiplication of matrix A and B is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mult=0;
            for(k=0;k<3;k++)
            {
                mult = mult + a[i][k]*b[k][j];
            }
             printf("%d\t",mult);
        }
        printf("\n");
    }
    

}