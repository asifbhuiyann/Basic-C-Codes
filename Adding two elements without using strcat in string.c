#include<stdio.h>
main()
{
    char value1[100]="Asif Bhuiyan";
    char value2[100]=" Is a Hacker";
    int i=0,len=0,j=0;
    while(value1[i]!='\0')
    {
    i++;
    len++;
    }
    while(value2[j]!='\0')
    {
    value1[len+j]=value2[j];
    j++;
    }

    printf(" %s \n",value1);
    return 0;
}

