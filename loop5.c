#include<stdio.h>
 int main()
{
int i,times;
 scanf("%d",&times);
 i = 0;
 do
 {
     i++;
     if(i==5)
     continue;
     printf("%d\n",i);


 }
     while (i <= times);

  return 0;
}

