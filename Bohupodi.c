#include<stdio.h>
#include<math.h>
main()
{
    double root1,root2,b,a,c,x;
    printf("Enter the value \n");
    scanf("%lf%lf%lf",&b,&c,&a);
    x=sqrt(pow(b,2)-4*a*c);
    root1=(-b+x)/2*a;
    root2=(-b-x)/2*a;
    printf("%lf%lf",root1,root2);
    return 0;
}
