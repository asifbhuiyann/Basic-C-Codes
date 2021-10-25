#include <stdio.h>
#include<string.h>
void Replace(char arr[],char oldChar, char newChar);
int main()
{
    char str[100], oldChar, newChar;

    printf("Enter string: ");
    gets(str);
    printf("OLD CHAR: ");
    oldChar = getchar();
    getchar();
    printf("NEW CHAR: ", oldChar);
    newChar = getchar();
    Replace(str, oldChar, newChar);
    printf("String after replacing '%c' with '%c' : \n%s", oldChar, newChar, str);
    return 0;
}
void Replace(char arr[],char oldChar, char newChar)
{
    int i = 0;
    while(arr[i]!='\0')
    {
        if(arr[i] == oldChar)
        {
            arr[i] = newChar;
        }
        i++;
    }
    return 0;
}

