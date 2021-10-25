#include<stdio.h>
main()
{
    char value1[100];
    gets(value1);
    char value2[100];

    strcpy(value2,value1);

    printf("Value 1 string: %s \n",value1);
    printf("\n\n");

}
