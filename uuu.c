
#include <stdio.h>
void fibonacci(int);
int main()
 {
    int  n;
fibonacci(n);
    printf("Enter the number : \n");
    scanf("%d", &n);

 }

void fibonacci(int n)
{

int i,  a = 0, b = 1, x=0;

    for (i = 0; i < n; i++)
        {
        a = b;
        b = x;
        x= a + b;
        printf("%d ", x);
        }

    return 0;
}
