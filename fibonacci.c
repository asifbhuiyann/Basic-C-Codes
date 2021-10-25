#include <stdio.h>
main()
 {
    int  n,i,a=0,b=1,x=0;
    printf("Enter the number : \n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
        {
        a = b;
        b = x;
        x= a + b;
        printf(" %d", x);
        }
    return 0;
}

