#include <stdio.h>
int length(char arr[]);
int main()
{
	char str[100]={0};
	int length;
	printf("Enter any string: ");
	gets(str);
	length=stringLength(str);
	printf("String length is : %d\n",length);
	return 0;
}
int length(char arr[])
{
	int i=0,count=0;
	while(str[i++]!='\0')
    {
		count+=1;
	}
	return count;
}
