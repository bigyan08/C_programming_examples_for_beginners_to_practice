//print the following using do while loop
//150 151 152 ..... 200 201
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=201;
    do{
        printf("%d ",a);
        a--;
    }while(a>=150);
    return 0;
}