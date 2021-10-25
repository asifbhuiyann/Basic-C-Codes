#include<stdio.h>
int main()
{
 FILE *file;
 char name[100];
char ch;
 int age;
 file = fopen("test3.txt","r");

 if(file==NULL)
 {
     printf("File doesn't exist");

 }
 else
 {
     printf("File is opened\n");
     printf("\n");
     while(!feof(file))
     {
         ch=fgetc(file);
         printf("%c",ch);
     }
     fclose(file);
     printf("\n");
     printf("\nFile is successfully read\n");

 }
return 0;
}




