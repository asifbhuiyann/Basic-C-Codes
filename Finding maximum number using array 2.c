#include<stdio.h>
main()
{
    int num[50],n,i,max;
    printf("How many numbers do you want:\n");
    scanf("%d",&n);
    printf("Enter numbers what you want:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];
    for(i=0;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("Maximum number is: %d \n",max);
    return 0;
}
