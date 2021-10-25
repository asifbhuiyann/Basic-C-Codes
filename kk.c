#include<stdio.h>
void fibo(int);
void main()
{
   int n;
   printf("Enter a number \n");
   scanf("%d",&n);
   fibo(n);
}

void fibo(int n)
{
   int i,c=0,a=0,b=1;
   printf("Fibonacci series \n");
   for(i=0;i<n;i++)
   {

       a=b;
       b=c;
c=a+b;
       printf("%d ",c);
   }

}
