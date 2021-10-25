#include <stdio.h>
struct Person
{
   int age;
   float salary;

};
int main()
{
    struct Person person1,person2;
    printf("Enter person1 information\n");
    printf("\nEnter age= ");
    scanf("%d",&person1.age);
    printf("Enter salary= ");
    scanf("%f",&person1.salary);

    printf("\n\nEnter person2 information\n");
    printf("\nEnter age= ");
    scanf("%d",&person2.age);
    printf("Enter salary= ");
    scanf("%f",&person2.salary);

    if((person1.age == person2.age) || (person1.salary == person2.salary))

        printf("\n\n person1 equal to person2");

    else
        printf("\n\n person1 not equal to person2");
return 0;
}

