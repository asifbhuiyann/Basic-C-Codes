#include <stdio.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE],n,i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements in the array : \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: ");
    for(i=0; i<n; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}
