#include<stdio.h>
main()
{
    int a[15],i;
    printf("Enter the values:");
    for(i=0;i<15;i++)
    {
        scanf("%d\n",&a[i]);

    }
    for(i=0;i<15;i++)
    {
        if(a[i]==100)
            printf("Serial number is:%d\n",i);
    }
}
