#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to read name roll and mark and display it
	char n[30];
	int roll;
	int mark;
	printf("enter your name:");
	scanf("%s",&n);
	printf("\nenter your roll no.:");
	scanf("%d",&roll);
	printf("\nenter your marks:");
	scanf("%d",&mark);
	printf("Name:%s\n",n);
	printf("Roll:%d\nMark:%d",roll, mark);
	
}
