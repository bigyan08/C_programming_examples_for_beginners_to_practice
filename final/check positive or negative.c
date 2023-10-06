#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to check whether the entered no. is positive or negative
	int n;
	printf("enter any integer:\n");
	scanf("%d",&n);
	if (n<0)
	{
		printf("%d is negative",n);
	}
	else if(n>0)
	{
		printf("%d is positive",n);
	}
	else 
	{
	printf("the number is zero");}
	
}
