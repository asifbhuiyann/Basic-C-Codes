//1. Putting first name and last name 2. removing vowel from the string. 3. Counting the size of a string. All are given in this program.
#include<stdio.h>
int main()
{
    char S1[20],S2[20],S3[50],S4[50];
    int x,y=0,z;
    printf("Enter First Name:");
    scanf("%s",S1);
    printf("Enter Last Name:");
    scanf("%s",S2);
    strcpy(S3,S1);
    strcat(S3,S2);
    printf("Full Name Is:\n");
    printf("%s\n",S3);
    for(x=0;x<100;x++)
    {
        if(S3[x] != 'A' && S3[x] != 'E' && S3[x] != 'I' && S3[x] != 'O' && S3[x] != 'U' && S3[x] != 'a' && S3[x] != 'e' && S3[x] != 'i' && S3[x] != 'o' && S3[x] != 'u')
        {
            S4[y] = S3[x];
            y++;
        }
    }
    printf("After removing vowel the name is:\n");
    printf("%s",S4);
    //My name is Asif Bhuiyan.So if i remove vowel from the name it will look like "sfBhyn"
    z=strlen(S4);
    printf("\nThe length after removing vowels is: %d",z);
    //The Size after removing vowel is 6
    return 0;
}

