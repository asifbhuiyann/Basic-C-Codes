#include<stdio.h>

int findFactorial();
int main()
{
  int i,factorial,num;

  printf("Enter a number: ");
  scanf("%d",&num);

  factorial = findFactorial(num);
  printf("%d",factorial);

  return 0;
}

int findFactorial(int num)
{
    int i,f=1;

    for(i=1;i<=num;i++)
      f=f*i;

     return f;
}
