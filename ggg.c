#include<stdio.h>
void age();
main()
{
    int a,b,c,n;
    printf("Enter age");
    age();

}
void age()
{
   int a,b,n,d=0;
   a=0;
   while(a<15)
   {
       scanf("%d",&n);
       a++;
       if(n<=40 || n>=60)
        continue;
       d++;
   }
   printf(" Age between 40-50 are:%d",d);
}
