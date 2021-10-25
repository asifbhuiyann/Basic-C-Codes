#include<stdio.h>
#include<string.h>
int length(char arr[]);
int main()
{
    char str[100];
    int len=0;
    printf("Enter a string:\n");
    gets(str);
    len=length(str);
    printf("Length is : %d \n",len);
    return 0;

}
 int length(char arr[])
{
    int i=0;
    int count=0;
    while(arr[i]!='\0')
    {
    i++;
    count++;
    }

   return count;

}

