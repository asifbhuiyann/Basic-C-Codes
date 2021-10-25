#include<stdio.h>
int main()
{
 FILE *file;
 char name[100];
 file = fopen("test2.txt","w");

 if(file==NULL)
 {
     printf("File doesn't exist");

 }
 else
 {
     printf("File is opened\n");
     printf("Enter your name:\n");
     gets(name);

     fputs(name,file);
     printf("File is successfully written\n");
     fclose(file);
 }

}


