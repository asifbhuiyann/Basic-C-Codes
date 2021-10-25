#include<stdio.h>
main()
{
    char value1[100],value2[100],swap[100];
    printf("Enter character of value one: \n");
    gets(value1);
    printf("\n");
    printf("Enter character of value two: \n");
    gets(value2);
    printf("\n");
    printf("\nBefore swapping:\n");
    printf("value1= %s\n",value1);
    printf("value2= %s\n",value2);
    strcpy(swap,value1);
    strcpy(value1,value2);
    strcpy(value2,swap);
    printf("\nAfter swapping:\n");
    printf("value1= %s\n",value1);
    printf("value2= %s\n",value2);
    return 0;
}
