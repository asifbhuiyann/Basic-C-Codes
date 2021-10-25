#include<stdio.h>
main()
{
    char value1[100],value2[100];
    printf("Enter character of value one: \n");
    gets(value1);
    printf("\n");
    strupr(value1);
    printf("\nResult= %s\n",value1);
    printf("\nEnter character of value two: \n");
    gets(value2);
    printf("\n");
    strlwr(value2);
    printf("Result= %s\n",value2);
    return 0;
}
