#include<stdio.h>
main()
{
    char S[]="Asif Bhuiyan";
    int i=0,len=0;
    while(S[i]!='\0')
    {
    i++;
    len++;
    }
    printf("Length is : %d \n",len);
    return 0;
}

