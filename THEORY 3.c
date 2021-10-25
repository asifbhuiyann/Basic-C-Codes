//Finding the highest mark of a student using function.
#include<stdio.h>
int x[20];
void highest();
int main()
{
    int sum=0,i;
    printf("ENTER THE MARKS OF STUDENTS:\n");
    for(i=0;i<20;i++)
    {
        printf("MARKS OF STUDENT NO %d :\n", i+1);
        scanf("%d",&x[i]);
    }
    for(i=0;i<20;i++)
    {
        sum=sum+x[i];
    }
    printf("TOTAL MARK IS:%d",sum);
    highest();
    return 0;
}
void highest()
{
    int max=0, i;
    for(i=0;i<20;i++)
    {
        if(x[i] > max)
        {
            max = x[i];
        }
    }
    printf("\nThe highest marks is %d\n", max);
}
