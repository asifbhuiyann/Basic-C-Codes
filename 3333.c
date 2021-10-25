#include<stdio.h>
main()
{
    int marks,grade;
    printf("Enter marks:\n");
    scanf("%d",&marks);
    grade=marks/10;
    switch(grade){
case 0:
case 1:
case 2:
case 3:
case 4:printf("Extraordinary");
break;
case 5:
case 6:printf("Mind blowing");
break;
case 7:printf("Very good");
break;
case 8:printf("Good");
break;
default:printf("Wrong number");
    }
    return 0;
}
