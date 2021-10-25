#include<stdio.h>
main()
{
    char character[100];
    printf("Enter name:\n\n");
    gets(character);
    strrev(character);
    printf("\n");
    printf("Reverse is: %s",character);
    return 0;
}
