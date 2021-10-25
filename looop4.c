#include<stdio.h>
main()
{
    int n,odd;
    printf("Enter n");
    scanf("%d",&n);
    odd=1;
    while(odd<n)
    {
        printf("%3d",odd);
        odd=odd+1;
    }
    printf("\n");
}

