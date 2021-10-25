//Taking input of 20 students in an array.
#include<stdio.h>
int main()
{
    int s[20],i;
    printf("ENTER THE MARKS OF 20 STUDENTS ONE BY ONE: \n");
    for(i=0;i<20;i++)
    {
        printf("\nENTER MARKS OF STUDENT NO %d: ", i+1);
        scanf("%d",&s[i]);
    }
    printf("\n\nMARK IS GIVEN BELLOW: ");

    for(i=0;i<20;i++)
    {
        printf("\n\nSHOWING MARKS OF STUDENT NO %d: ", i+1);
        printf("%3d\n",s[i]);
    }
    return 0;
}
