#include<stdio.h>
main()
{
      int A[10][10];
      int i,j,r,c,usum=0,lsum=0;
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
       printf("The value for A matrix is: \n");
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
            printf("%d ",A[i][j]);
        }
            printf("\n");
        }

        printf("\n");
        printf("The sum of upper and lower triangle element is: \n");
        for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
        {
            if(i<j)
            {
            usum = usum + A[i][j];
            }
             if(i>j)
            {
            lsum = lsum + A[i][j];
            }
        }
        }

         printf("%d \n",usum);
         printf("%d ",lsum);

         printf("\n\n\n");
         return 0;
}

