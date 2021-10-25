#include<stdio.h>
main()
{
    int x,y,sum,avg,mul;
    int *p1,*p2;
    printf("Enter the value of x and y:\n");
    scanf("%d%d",&x,&y);
    p1=&x;
    p2=&y;
    sum=*p1+*p2;
    avg=(*p1+*p2)/2;
    mul=*p1 * *p2;
    printf("sum is : %d\n",sum);
    printf("avg is : %d\n",avg);
    printf("mul is : %d\n",mul);
    return 0;

}
