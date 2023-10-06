// wap to read a matrix of order 3*3 and check if its symmetrical or not
#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j,c=0;
    printf("enter the data for the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter element for [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(a[i][j]==a[j][i])
           {
            c++;
           }       
    }
    }
    if(c==9)
    {
        printf("The matrix is symmetrical!");
    }
    else{
        printf("the matirx is not symmetrical!");
    }


    

}