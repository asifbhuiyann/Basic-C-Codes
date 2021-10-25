#include<stdio.h>
void golla();
void con();
main()
{
    int i,j,n;
    printf("Enter the value:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n;j++)
    {
    golla();
    }
    con();
    }
    return 0;
}
void golla()

{
    printf("        *  \n");
    printf("     *     * \n ");
    printf("   *       *  \n");
    printf("    *       * \n ");
    printf("    *     *  \n");
    printf("        *  \n");

}
void con()

{
    printf("   *********** \n ");
    printf("   *********  \n");
    printf("     *******  \n");
    printf("      ***** \n");
    printf("       *** \n ");
    printf("       * \n ");
    printf("\n\n\n");
}
