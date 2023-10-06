#include<stdio.h>
#include<string.h>
void main()
{
    char file1[20];
   printf("Use of 'strrev'\n");
   printf("enter any string:");//reversing a string
   scanf("%s",&file1);
   printf("\nReversed form :%s\n",strrev(file1));
   printf("use of 'strlwr'\n");
   printf("enter string in upper case:");
   scanf("%s",&file1);
   printf("\nIn lower case:%s\n",strlwr(file1));//converting upper to lowercase
   printf("Use of 'strupr'\n");
   printf("enter string in lowercase:");
   scanf("%s",&file1);
   printf("\nString in upper case:%s\n",strupr(file1));//converting lower to uppercase

//for strcpy we need two files
   char file3[20],file4[20];
   file3="helloworld";
   strcpy(file4,file3); //strcpy(destination, initial file);
   printf("%s",file4);
}