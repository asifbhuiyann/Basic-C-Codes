#include <stdio.h>

int main()
{
    int arr1[100],arr2[100];
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr1[i]==arr1[j])
            {
                count++;
                arr2[j] = 0;
            }
        }
        if(arr2[i] != 0)
        {
            arr2[i] = count;
        }
    }
    for(i=0; i<size; i++)
    {
        if(arr2[i] != 0)
        {
            printf("%d appears %d times\n", arr1[i], arr2[i]);
        }
    }

    return 0;
}

