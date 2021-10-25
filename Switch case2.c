
#include<stdio.h>
int main()
{
    int marks,grade;
    printf("Enter marks: \n");
    scanf("%d",&marks);
    grade=marks/10;
    switch(grade){
        case 4 :printf("fail");
               break;

        case 5 :printf("pass");
                break;

        case 6 :printf("pass");
                break;

        case 7 :printf("pass");
                break;

        case 8 :printf("good");
               break;

        case 9 :printf("good");
               break;

        case 10 :printf("good");
               break;

        case 105 :printf("good");
               break;

        case 110 :printf("fatafati");
               break;


        default :printf("Asif");
    }
     return 0;
    }
