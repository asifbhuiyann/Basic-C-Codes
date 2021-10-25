
#include<stdio.h>
main()
{
    int n;
    printf("Enter the value of n= \n");
    scanf("%d",&n);
    if(n<0)
  golla();
  else
    triangle();
}

golla()
{
    printf("   *****      \n");
    printf(" *       *      \n");
    printf("*         *      \n");
    printf(" *       *      \n");
    printf("   *****      \n");

}
triangle()
{
    printf("     *     \n");
    printf("    * *      \n");
    printf("   *   *      \n");
    printf("  *     *      \n");
    printf("  *******      \n");
}
