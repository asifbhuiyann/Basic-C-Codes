#include<stdio.h>
main()
{
    int A[10][10],transpose[10][10];
    int i,j,r,c;
    printf("Enter number of rows and colums :\n");
    scanf("%d %d",&r,&c);
    printf("Enter value for A matrix:\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
     printf("\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                transpose[j][i]=A[i][j];
            }
             printf("\n");
        }

        printf("A= \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\t");
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }

        printf("Transpose matrix is:\n");
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                printf("\t");
                printf("%d ",transpose[i][j]);
            }
            printf("\n");
        }


}

