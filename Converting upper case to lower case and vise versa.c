#include<stdio.h>
main()
{
    char str[100];
    int i;
    printf("Enter a sring:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
        else
            str[i]=str[i]-32;
    }
  printf("Converted string is: %s\n",str);
    return 0;
}
