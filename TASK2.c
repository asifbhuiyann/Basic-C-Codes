#include<stdio.h>
void search(char s[100],char k[2])
{
    int i=0,m=0;

    while(s[i]!='\0')
    {
        if(s[i]==k[0])
        {
            m=1;
            break;
        }
        i++;
    }
    if(m==1)
        printf("Found it");
    else
        printf("Not found");
}
main()
{
    char k[2];
    char s[100];
   printf("Enter string:");
    scanf("%[^\n]",s);
     printf("Enter key:");
    scanf("%s",k);
    search(s,k);
}
