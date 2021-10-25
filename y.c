#include<stdio.h>
main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++)
        {
           for(k=1;k<=2;k++)
           {
             printf("\n%d\n%d\n%d",i,j,k);

           }
        }

    }
    return 0;
}
