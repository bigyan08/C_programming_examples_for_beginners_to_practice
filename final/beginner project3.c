
//create an area calculator for any three geometrical shapes
#include<stdio.h>
#include<conio.h>
void main()
{
	int area,b,r,l,n,x,y,z,s;
	printf("1:Area of triangle\n2:Area of circle\n3:Area of rectangle\n___________________\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{
				printf("enter length of sides of traingle:");
				scanf("%d%d%d",&x,&y,&z);
				s=(x+y+z)/2;
				area= ((s*(s-x)*(s-y)*(s-z))^(1/2));
				printf("the area of triangle is %d\n___________________\n",&area);
				break;
			}
		case 2:
		{
			printf("enter the radius");
			scanf("%d",&r);
			area=(22/7)*r*r;
			printf("area of circle is %d\n___________________\n",&area);
			break;
		}
		case 3:
		{
			printf("enter length and breadth");
			scanf("%d%d",&l,&b);
			area= l*b;
			printf("area of rectangle is %d\n___________________\n",&area);
			break;
		}
		default: {
         printf("Invalid Choice");
         break;
      }



	 } 
}
