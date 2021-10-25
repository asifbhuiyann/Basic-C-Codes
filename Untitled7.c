#include<stdio.h>
main()
{
    int i,n,age,count=0;;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("\nEnter age of %d persons:",i);
        scanf("%d",&i);
    }
    for (i=1;i<=n;i++)
    {
        if(i>50 && i< 60)
        count++;
        else
            continue;
    }
    printf("%d",count);
    return 0;
}
