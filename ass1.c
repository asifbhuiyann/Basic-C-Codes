#include<stdio.h>
#include<math.h>
void cal(int);
main()
{
  int a;
  printf("Value");
  scanf("%d",&a);
  cal(a);
}
void cal(int a)
{

int i;
double sum=0.0,sum1=0.0,sum2=0.0;
  for(i=0;i<a;i++)
  {
      if(i%2==0)
        sum1=sum1+pow((a-i),2);
      else
        sum2=sum2+pow((a-i),2);

  }
  sum=sum1-sum2;
  printf("%lf",sum);

}

