#include<stdio.h>
struct employee{
    int emp_id;
    char emp_name[20], emp_address[20];
    float emp_salary;
};
int main()
{
    int i,n;
    printf("enter the number of records to be read:");
    scanf("%d",&n);
    struct employee emp[n];
    printf("enter records:");
    for(i=0;i<n;i++)
    {
        printf("\nEnter name=");
        scanf("%s",emp[i].emp_name);
        printf("\nEnter address:");
        scanf("%s",emp[i].emp_address);
        printf("\nEnter id:");
        scanf("%d",&emp[i].emp_id);
        printf("\nEnter salary:");
        scanf("%f",&emp[i].emp_salary);
    }
    printf("Employee Information List:\n");
    for(i=0;i<n;i++)
    {
        printf("Record no.%d\n\n",i);
        printf("\n Name=%s \n Adress=%s \n ID=%d \n Salary=%.2f\n ",emp[i].emp_name,emp[i].emp_address,emp[i].emp_id,emp[i].emp_salary);
    }
}