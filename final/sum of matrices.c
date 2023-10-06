// wap to input two matrices of order 3*3 and display the sum of the matrices
#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], i, j;

    printf("Enter the data of matrix A:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the data of matrix B:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Addition of matrix A and B is:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
