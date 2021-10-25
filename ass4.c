#include <stdio.h>

int main()
 {
    int i, n, a = 0, b = 1, x;

    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");





    for (i = 1; i <= n; ++i)
        {
        printf("%d, ", a);
        x= a + b;
        a = b;
        b = x;
        }

    return 0;
}
