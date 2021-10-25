#include <stdio.h>
#include <string.h>
int compare(char str1[], char str2[]);
int main()
{
  	char Str1[100], Str2[100];


  	printf("Enter the First String :  ");
  	gets(Str1);

  	printf("Enter the Second String :  ");
  	gets(Str2);
  	compare(Str1,Str2);
  	return 0;
}
int compare(char str1[], char str2[])
{

int result, i;
  	for(i=0;str1[i]==str2[i] && str1[i]=='\0';i++);
  	if(str1[i] < str2[i])
   	{
   		printf("\n -1");
	}
	else if(str1[i] > str2[i])
   	{
   		printf("\n 1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}

  	return 0;
}

