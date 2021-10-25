#include<stdio.h>
main()
{
    int fibo[50],i,n;
    printf("Enter how many fibonacci terms you want to know:\n");
    scanf("%d",&n);
    fibo[0]=0;
    fibo[1]=1;
    for(i=2;i<n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",fibo[i]);
    }
    return 0;
}
