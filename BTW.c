#include<stdio.h>
main()
{
    int row,col,n;
    printf("Enter value:\n");
    scanf("%d",&n);
    for(row=n;row>=0;row--)
    {
        for(col=1;col<=n-row;col++)
        {
                printf(" ");
        }
            for(col=1;col<=2*row-1;col++)
            {
                printf("*");
            }
printf("\n");
    }
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
                printf(" ");
        }
            for(col=1;col<=2*row-1;col++)
            {
                printf("*");
            }
        printf("\n");
    }
}