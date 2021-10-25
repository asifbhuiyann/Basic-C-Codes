#include<stdio.h>
void pyra(int);
main()
     {
         int n;
         printf("Enter the value");
         scanf("%d",&n);
         pyra(n);
     }
        void pyra(int n)
        {
        int i,j,k;

         for (i=1;i<=n;i++)
         {
             for(j=n-i;j>0;j--)
             {
                 printf(" ");
             }
             for(k=0;k<2*i-1;k++)
             {
                   printf("*");
             }
             printf("\n");
         }

        }
