#include<stdio.h>
main()
{
int a[5],i,m=0;
for(i=0;i<=4;i++)
{
printf("Enter values:\n");
scanf("%d",&a[i]);
}
for(i=0;i<=4;i++)
{
    if(a[i]>m)
    m=a[i];
}
printf("\n\n");
printf("Maximum number is:%d\n",m);
return 0;
}
