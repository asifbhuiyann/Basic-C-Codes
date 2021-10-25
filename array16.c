#include<stdio.h>
main()
{
    int A[2][3]={{2,3,4},{5,6,7,8}};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n\n");
    }

return 0;
}
