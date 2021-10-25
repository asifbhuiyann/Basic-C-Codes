#include<stdio.h>
#include<string.h>
void reverse(char arr[],char arry[]);
main()
{
    char num1[100],num2[100];
    printf("Enter character value one:\n");
    gets(num1);
    reverse(num1,num2);
    printf("\n");
}
void reverse(char arr[],char arry[])

{

   int i=0,len=0,j;
    while(arr[i]!='\0')
    {
    i++;
    len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        arry[j]=arr[i];
    }
    arry[j]='\0';
    printf("Before Reverse: %s \n",arr);
    printf("After Reverse: %s",arry);
    return 0;
}


