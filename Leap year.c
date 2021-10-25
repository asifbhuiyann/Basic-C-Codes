#include<stdio.h>
main()
{
    int year,x,y,z;
    printf("Enter year");
    scanf("%d",&year);
    x=year%400==0;
    y=(year%100!=0);
    z=year%4==0;
    switch(x)
    {
    case 1:printf("leap year");
    break;
    default :
    switch(y)

    {
        case 2:printf("Not leap year");
        break;
        default :
        switch(z)
        {
        case 3:printf("leap year");
        break;
        default :printf("Asif");
    }

    }
    }
    return 0;
}
