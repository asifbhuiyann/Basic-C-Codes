#include <stdio.h>
#include<math.h>
int main(){

    int n, a= 0, b, c;
    printf("Enter number:\n");
    scanf("%d", &n);
    c=n;

     while (n != 0)
        {
        b = n % 10;
        a =a* 10 +b;
        n /=10;
    }
    if (c == a)
        printf("%d palindrome",c);
    else
        printf("%d not palindrome",c);
    return 0;
}





