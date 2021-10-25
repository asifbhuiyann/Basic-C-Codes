#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b \n");
    scanf("%d%d",&a,&b);
    switch(a)
    {
        case 1: printf("This is part of outer switch.\n");
        break;
        switch(b)
        {
        case 2: printf("This is a part of inner switch.\n");
                break;
      default :printf("Inner switch default value.\n");
        }

    }
    return 0;
}
