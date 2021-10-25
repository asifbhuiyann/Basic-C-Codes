//Showing average marks of all students by taking input from user.
#include<stdio.h>
int main()
{
    int x[20],i,sum=0;
    printf("ENTER THE MARKS OF STUDENTS ONE BY ONE: \n");
    for(i=0;i<20;i++)
    {
       printf("\nMARKS OF STUDENT NO %d: ", i+1);
       scanf("%d",&x[i]);
    }
    for(i=0;i<20;i++)
    {
        sum=sum+x[i];
    }
    printf("\nTOTAL MARK IS: %d\n",sum);
    printf("\nTHE AVERAGE IS: %0.2f\n",(float)sum/20);
    return 0;
}
