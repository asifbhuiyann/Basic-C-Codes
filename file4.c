#include<stdio.h>
int main()
{
 FILE *file;
 char name[100];

 int age;
 file = fopen("test3.txt","w");

 if(file==NULL)
 {
     printf("File doesn't exist");

 }
 else
 {
     printf("File is opened\n");

     printf("Enter your name:\n");
     gets(name);

     printf("Enter your age:\n");
     scanf("%d",&age);

     fprintf(file,"Name: %s\nAge: %d",name,age);

     printf("File is successfully written\n");
     fclose(file);
 }

}



