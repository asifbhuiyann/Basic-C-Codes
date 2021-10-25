#include <stdio.h>
int main()
{
 char grade;
 printf("Enter your grade: ");
 scanf("%c", &grade);
 switch(grade)
 {
 case 'A' :
 printf("Excellent!\n" );
 break;
 case 'B' :
 printf("Well Done!\n" );
 break;
 case 'C' :
 printf("Average\n" );
 break;
 case 'D' :
 printf("You passed\n" );
 break;
 case 'F' :
 printf("Better try again\n" );
 break;
default :
 printf("Invalid grade\n" );
 }
 return 0;
}
