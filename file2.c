#include<stdio.h>
int main()
{
 FILE *file;
 char name[100]="Asif Bhuiyan";
 int length = strlen(name);
 int i;
 file = fopen("test1.txt","w");
 if(file==NULL)
 {
     printf("File doesn't exist");

 }
 else
 {
     printf("File is opened");
     for(i=0;i<length;i++)
     {
         fputc(name[i],file);
     }
     printf("File is successfully written");
     fclose(file);
 }
 return 0;
}

