#include<stdio.h>
void pointer();
main()
{
    int a,b,c;

    printf("Enter the value of a:\n");
    scanf("%d",&b);
    printf("Enter the value of b:\n");
     scanf("%d",&b);
    printf("Enter the value of c:\n");
    scanf("%d",&c);
    pointer();
}
void pointer(int *ptr1, int *ptr2, int *ptr3)
{
    if(*ptr1>*ptr2)&&(ptr1>ptr3)
        printf("%d",*ptr1);
    else if(*ptr2>*ptr3)
        printf("%d",*ptr2);
    else
        printf("%d",*ptr3);
}
