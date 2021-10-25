#include<stdio.h>
void golla();
void con();
main()
{
    int i,j,n;
    printf("Enter the value");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
        {
            golla();
        }
        for(i=1;i<=n;i++)
    {
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

