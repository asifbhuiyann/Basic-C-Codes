#include<stdio.h>
main()
{
    int A[10][10],B[10][10],X[10][10];
    int i,j,r1,r2,c1,c2,k,sum=0,result;
    printf("Enter row and colums for A matrix:\n");
    scanf("%d %d",&r1,&c1);
      printf("\n\n");
    printf("Enter row and colums for B matrix:\n");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("\n\n");
        printf("Error!!! \n");
        printf("Rows and colums are not equal for A & B matrix. \n");
        printf("Try again.\n\n\n");
        printf("Enter row and colums for A matrix:\n");
        scanf("%d %d",&r1,c1);
        printf("Enter row and colums for B matrix:\n");
       scanf("%d %d",&r2,c2);
    }
     printf("\n\n");
    printf("Enter the value of A matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",& A[i][j]);
        }
        printf("\n\n");
    }
      printf("\n\n");
     printf("Enter the value of B matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",& B[i][j]);
        }
        printf("\n\n");
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+ A[i][k] * B[k][j];
            }
            X[i][j]=sum;
            sum=0;
        }
    }
    printf("A= \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\t");
            printf("%d",A[i][j]);
        }
        printf("\n\n");
    }

    printf("B= \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t");
            printf("%d",B[i][j]);
        }
        printf("\n\n");
    }

     printf("A*B= \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\t");
            printf("%d",X[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
