#include<stdio.h>
main()
{
    int row,n,col,x;
    printf("PLEASE ENTER THE VALUE:\n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
    for(col=1;col<=row;col++)
    {
    if(row==n||col==row||col==1)
    {
    printf("*");}
    else
    {
    printf(" ");
    }
    }
    printf("\n");
    }
}



