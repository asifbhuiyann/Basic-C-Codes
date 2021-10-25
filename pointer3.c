#include<stdio.h>
main()
{
    int x,y,temp;
    int *a,*b;
    printf("Enter the values:\n");
    scanf("%d %d",&x,&y);
    a=&x;
    b=&y;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After swaping x is : %d\n",x);
    printf("After swaping y is : %d",y);
    return 0;

}
