
#include<stdio.h>
int pro(int);
main()
{
    int n;
    printf("Enter n=");
    scanf("%d",&n);
    pro(n);}
    int pro(int n){
    int i,j,k,a;
    for(i=0; i<n; i=i+2){
        a=1;
        for(j=0; j<=i; j++)
        {
        if(a%2!=0)
        printf("%d",a);
        a++;
        }
        printf("\n");
        a=2;
        for(k=0; k<=i; k++)
        {
        if(a%2==0)
        printf("%d",a);
        a++;
        }
        printf("\n");
    }
    }

