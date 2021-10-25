#include<stdio.h>
int main()
{
    char str[500];
    int i,x,capital,small,digit;
    printf("Enter the value of string: \n");
    gets(str);
    capital=small=digit=i=0;
    while((x=str[i])!='\0')
    {
        if(x>=65 && x<=90)
            capital++;
        else if(x>=97 && x<=122)
            small++;
        else if(x>=48 && x<=57)
        digit++;

       i++;
    }
    printf("Number of Capital letter is : %d\n",capital);
    printf("Number of small letter is : %d\n",small);
    printf("Number of digit is : %d\n",digit);
    return 0;
}
