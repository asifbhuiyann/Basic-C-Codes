#include<stdio.h>
#include<math.h>
main()
{
    int a,b,m,n,o,p;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    m=sum(a,b);
    n=mul(a,b);
    o=sub(a,b);
    p=powr(a,b);
}
int sum(int x, int y)
{
    int r;
    r=x+y;
    printf("%d\n",r);

}
int mul(int x, int y)
{
  int r;
    r=x*y;
    printf("%d\n",r);

}
int sub(int x, int y)
{
  int r;
    r=x-y;
    printf("%d\n",r);

}
int powr(int x, int y)
{
    int r;
    r=pow(x,y);
    printf("%d\n",r);

}

