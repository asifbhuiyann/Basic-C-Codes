#include<stdio.h>
int main()
{
    int i,j,k,l,m,n[5];
    printf("ENTER THE NUMBER OF USER:\n");
    scanf("%d",&m);
    char string[m][10][30];
    for(i=0;i<m;i++)
    {
        printf("GIVE THE NUMBER OF ENTRIES:\n");
        scanf("%d",&n[i]);
        for(j=0;j<n[i];j++)
        {
            scanf("%s",string[i][j]);
        }
    }
    for(k=0;k<m;k++)
    {
        for(l=0;l<n[k];l++)
        {
            printf("%s",string[k][l]);
        }
    }
}
