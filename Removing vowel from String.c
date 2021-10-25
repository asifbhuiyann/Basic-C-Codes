#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,c;
    char S1[20],S2[20],S3[50],S4[50];
    printf("Enter First Name:");
    scanf("%s",S1);
    printf("Enter Last Name:");
    scanf("%s",S2);
    strcpy(S3,S1);
    strcat(S3,S2);
    printf("Full Name Is:\n");
    printf("%s\n",S3);
    for(a=0;a<100;a++)
    {
        if (S3[a] != 'a' && S3[a] != 'e' && S3[a] != 'i' && S3[a] != 'o' && S3[a] != 'u' && S3[a] != 'A' && S3[a] != 'E' && S3[a] != 'I' && S3[a] != 'O' && S3[a] != 'U')
        {
            S4[b] = S3[a];
            b++;
        }
    }
    printf("After removing vowel the name is:\n");
    printf("%s",S4);
    return 0;
}
