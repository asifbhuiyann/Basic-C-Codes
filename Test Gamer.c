#include<stdio.h>
int main()
{
    int i,j,k,l,x,y[5];
    printf("Input the number of users\n");
    scanf("%d",&x);
    char string[x][10][30];
    for(i=0;i<x;i++)
    {
        printf("Input the number of entries you want to make\n");
        scanf("%d",&y[i]);
        for(j=0;j<y[i];j++)
        {
            scanf("%s",string[i][j]);
        }
    }
    for(k=0;k<x;k++)
    {
        for(l=0;l<y[k];l++)
        {
            printf("%s",string[k][l]);
        }
    }
}
