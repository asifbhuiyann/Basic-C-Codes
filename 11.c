#include<stdio.h>
main()
{
    int i,j,k,n;
    printf("Enter value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            for(k=1;k<=2*i-n;k++)
            {
                printf("*");
                printf("\n");
            }
        }
    }
    return 0;
}
