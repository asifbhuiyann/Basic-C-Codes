#include<stdio.h>
void search(int array[],int size,int key)
{
    int i,r=0;
    for(i=0;i<size;i++)
    {
        if(array[i]==key)
            r=1;

    }
    if(r==1)
        printf("Found it ");
 else
        printf("Not found it");

}
main()
{
    int s,k,j;
    printf("How many numbers:\n");
    scanf("%d",&s);
    int array[s];
    printf("Enter value of array:\n");
    for(j=0;j<s;j++)
    {
        scanf("%d",&array[j]);
    }
    printf("Enter key:\n");
    scanf("%d",&k);
    search(array,s,k);
    return 0;
}
