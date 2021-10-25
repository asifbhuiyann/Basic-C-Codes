#include<stdio.h>
main()
{
    int A[3][4],B[3][4];
    int i,j;
    printf("Enter value for A matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
        printf("A= \n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                printf("\t");
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }

            printf("\n\nEnter value for B matrix:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
        printf("B= \n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                printf("\t");
                printf("%d",B[i][j]);
            }
             printf("\n");
        }
        return 0;
    }



