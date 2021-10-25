#include<stdio.h>
main()
{
    int A[10][10],B[10][10],X[10][10];
    int i,j,r,c;
    printf("Enter number of rows and colums:\n");
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

            printf("\n\nEnter value for B matrix:\n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
        printf("B= \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\t");
                printf("%d",B[i][j]);
            }
             printf("\n");
        }


        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                X[i][j]=A[i][j]+B[i][j];
            }
             printf("\n");
        }

        printf("A+B=\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\t");
               printf("%d ",X[i][j]);
            }
             printf("\n");
        }

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                X[i][j]=A[i][j] * B[i][j];
            }
             printf("\n");
        }

        printf("A*B=\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("\t");
               printf("%d ",X[i][j]);
            }
             printf("\n");
        }

        }






