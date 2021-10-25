#include<stdio.h>
main()
{
    int a[15],i,n,e;
    printf("Enter the values:");
    for(i=0;i<15;i++)
    {
        scanf("%d\n",&a[i]);

    }
     printf("Enter the value you want to delete:");
        scanf("%d\n",&n);
    for(i=n;i<15;i++)
    {
        if(a[i]==n)
        {
            a[i]=e;
        }
        break;

    }
                printf("Value is:%d\n",e);
}
