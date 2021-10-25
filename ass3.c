#include<stdio.h>
void pyra(int);
main()
     {
         int n;
         pyra(n);
     }
        void pyra(int n)
        {
        int i,j,k,l;

         for (i=1;i<=5;i++)
         {
             for(j=5-i;j>0;--j)
             {
                 printf("  ");
             }
             for(k=0;k<1*i-1;k++)
             {

            printf("* ");

             }
             printf("\n");
         }

        }
