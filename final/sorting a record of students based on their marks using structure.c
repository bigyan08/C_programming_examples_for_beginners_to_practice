#include<stdio.h>
#include<string.h>
struct student{
    char stu_name[20],address[20];
    int stu_roll;
    float stu_mark;
};
int main()
{
    int i,j;
    char a[20],n[20];
    int r;
    float m;
    struct student stu[48];
     printf("enter records:");
    for(i=0;i<48;i++)
    {
        printf("\nEnter name:");
        scanf("%s",&stu[i].stu_name);
        printf("\nEnter address:");
        scanf("%s",&stu[i].address);
        printf("\nEnter rollno:");
        scanf("%d",&stu[i].stu_roll);
        printf("\nEnter mark:");
        scanf("%f",&stu[i].stu_mark);
    }
    for(i=1;i<48;i++)
    {
        for(j=i+1;j<48;j++)
        {
            if((stu[j].stu_mark)>(stu[i].stu_mark))
            {
                m=stu[i].stu_mark;
                stu[i].stu_mark=stu[j].stu_mark;
                stu[j].stu_mark=m;

               strcpy(n,stu[i].stu_name);
               strcpy(stu[i].stu_name,stu[j].stu_name);
               strcpy(stu[j].stu_name,n);

                r=stu[i].stu_roll;
                stu[i].stu_roll=stu[j].stu_roll;
                stu[j].stu_roll=r;

               strcpy(a,stu[i].address);
               strcpy(stu[i].address,stu[j].address);
               strcpy(stu[j].address,a);
            }
        }
    }
    for(i=0;i<3;i++)
    {
        printf("\n Name:%s \n Address:%s \n Rollno:%d \n Mark:%.2f \n",stu[i].stu_name,stu[i].address,stu[i].stu_roll,stu[i].stu_mark);
    }

}

