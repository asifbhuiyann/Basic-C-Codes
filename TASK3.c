#include<stdio.h>
void count(char arr[]);
int main()
{
    char str[100];
    printf("Enter the value of string:\n");
    gets(str);
    count(str);
    return 0;
}
 void count(char arr[])
{
    int i,vowel,consonent,c;
    i=vowel=consonent=0;
    while((c=arr[i])!='\0')
    {
       if (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'
        || c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U'
        )
        vowel++;
        else if((c>='a' && c<='z')|| (c>='A' && c<='Z'))
        consonent++;
        i++;
    }
     printf("vowel number:%d\n",vowel);
     printf("consonent number:%d\n",consonent);
    return 0;
}

