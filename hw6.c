#include<stdio.h>
main()
 {
    int i;
    for (i=5; i<=5; i++)
    {
    printf("\n\n");
   for (int j=1; j<=10; j++)
    {
    printf("%d X %d = %d\n", i, j, i*j);
    }
    }
    printf("\n");
    return 0;
 }
