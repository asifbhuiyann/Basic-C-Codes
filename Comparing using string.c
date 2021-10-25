#include<stdio.h>
main()
{
    char num1[100],num2[100];
    printf("Enter character value one:\n\n");
    gets(num1);
    printf("\n");
    printf("Enter character value two:\n\n");
    gets(num2);
     printf("\n");
    int compare;
    compare=strcmp(num1,num2);
    if(compare==0)
    {
         printf("\n");
        printf("Characters are equal.\n");
    }
    else
    {
         printf("\n");
        printf("Characters are not equal.\n");
    }
return 0;
}
