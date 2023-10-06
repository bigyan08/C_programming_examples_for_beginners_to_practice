//to find the list of prime numbers between two user entered numbers
#include<stdio.h>
main()
{
    int a,b,i,j,c=0;
    printf("enter n1 and n2:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=2;j<=i/2;j++)
        {
            if((i%j)==0)
            {
                c++;
                break;
          
            }
        }
            if(c==0)
            {
                printf("%d ",i);
            }
    
            
        
    }
}
