#include <stdio.h>
int main()
{
    int a,b,c;
    int *ptr[3];
    ptr[3];
    ptr[0]= &a;
    ptr[1]= &b;
    ptr[2]= &c;
    a=100;
    b=200;
    c=300;
    printf("value of a: %d, b: %d, c: %d\n",*ptr[0],*ptr[1],*ptr[2]);
    *ptr[0] +=20;
    *ptr[1] +=10;
    *ptr[2] +=30;
    printf("After adding 10\n value of a: %d, b: %d, c: %d\n",*ptr[0],*ptr[1],*ptr[2]);

    return 0;
}
