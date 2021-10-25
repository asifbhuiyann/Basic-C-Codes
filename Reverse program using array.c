#include<stdio.h>
main()
{
int a[5],i;
printf("Enter values: \n");
for(i=0;i<=4;i++)
scanf("%d",&a[i]);
printf("Reverse is:\n\n");
for(i=4;i>=0;i--)
printf("%d", a[i]);
return 0;
}
