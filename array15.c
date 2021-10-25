#include<stdio.h>
main()
{
    int array1[100],array2[100],i,n;
    printf("How many numbers do you want to take input: \n");
    scanf("%d",&n);
    printf("Enter the numbers: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("The value of Array 1 are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }
    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }
    printf("\n\n\n");
    printf("The value of Array 2 are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }
    return 0;
}
