#include<stdio.h>
void swap();
main()
{
    int x=10,y=20;
     printf("Before swaping x=%d ,y=%d\n",x,y);
    swap(&x,&y);
     printf("After swaping x=%d ,y=%d\n",x,y);
    return 0;
}
 void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
