#include<stdio.h>
#include<math.h>
 computeAvg();
main()
{
    int x,y;
    float result;
    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    result=computeAvg(x,y);
    printf("%f",result);
}
 computeAvg(int a, int b)
{
    return (a+b)/2;
}
