#include<stdio.h>
main()
{
    char str1[100],str2[100];
    gets(str2);
    sprintf(str1,"Result is = %s\n",str2);
    puts(str1);
    return 0;
}
