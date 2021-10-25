#include<stdio.h>
main()
{
    int n,odd;
    printf("Enter n=");
    scanf("%d",&n);
    odd=1;
    while(odd<n)
    {
        printf("%d",odd);

        odd=(odd+2);
    }
    printf("\n");
}


