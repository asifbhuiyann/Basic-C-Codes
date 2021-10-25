#include<stdio.h>
main()
{
    int n,ev;
    printf("Enter n");
    scanf("%d",&n);
    ev=0;
    while(ev<n)
    {
        printf("%d",ev);
        ev=ev+2;
    }
    printf("\n");
}
