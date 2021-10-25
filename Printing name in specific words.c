#include<stdio.h>
main()
{
    char S[100];
     printf("Enter your full name:\n\n");
    gets(S);
    int i=0;
    while(S[i]!='\0')
    {
    printf("%c\n",S[i]);
    i++;
    }
    return 0;
}

