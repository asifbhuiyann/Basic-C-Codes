#include<stdio.h>
main()
{
    char num1[100],num2[100];
    printf("Enter character value one:\n");
    gets(num1);
    printf("\n");
   int i=0,len=0,j,x;
    while(num1[i]!='\0')
    {
    i++;
    len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        num2[j]=num1[i];
    }
    num2[j]='\0';
    printf("Before Reverse : %s \n",num1);
     printf("\n");
    printf("After Reverse  : %s",num2);
     printf("\n");
    x=strcmp(num1,num2);
    if(x==0)
    {
         printf("\n");
        printf("This number is palindrome");
    }
    else
    {
         printf("\n");
        printf("This number is not palindrome");
    }
     printf("\n");
    return 0;
}

