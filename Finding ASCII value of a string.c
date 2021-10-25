#include<stdio.h>
main()
{
    char str[100];
    int i;
    printf("Enter a string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        printf("\n%c=%d",str[i],str[i]);
    }
    return 0;
}
