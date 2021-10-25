//Making a calander of current month using 2D array.
#include<stdio.h>
int main()
{
int a,b;
int x[6][7]=
{
    { 0, 0, 0, 0, 0, 1, 2 },
    { 3, 4, 5, 6, 7, 8, 9 },
    {10,11,12,13,14,15,16 },
    {17,18,19,20,21,22,23 },
    {24,25,26,27,28,29,30 },
    {31, 0, 0, 0, 0, 0 ,0 }

};
printf("\t\tMAY 2020\n");
printf("\nSun   Mon   Tue   Wed   Thu   Fri   Sat\n" );
printf("_______________________________________\n\n");
for(a=0;a<6;a++)
{
    for(b=0;b<7;b++)
    {
        if(x[a][b]==0)
        {
            printf("      ");
            continue;
        }
        if(x[a][b]<10 && x[a][b]>0)
            printf(" %d    ",x[a][b]);
        else
            printf("%d    ",x[a][b]);
    }
printf("\n");
}
return 0;
}



