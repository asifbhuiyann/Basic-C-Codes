#include <stdio.h>
int main()
{
    int a[20],i,n;
    printf("Even numbers : \n");
    for(i=1; i<20; i++)
    {
        scanf("%d",&a[i]);
    }
    {
         for(i=1; i<20; i++)
         {
        if(a[i]%2 == 0)
        {
            printf("Even number serial is :%d\n", i);
        }

     }
    return 0;
}
}
