#include <stdio.h>
struct Person
{
   int age;
   float salary;

};
int main()
{
    struct Person person1,person2,person3;

    printf("Enter person1 information:\n");

    printf("\nEnter age= ");
    scanf("%d",&person1.age);
    printf("Enter salary= ");
    scanf("%f",&person1.salary);

    printf("\n Information of peron 1 is:\n");
    printf("Age= %d\n",person1.age);
    printf("Salary= %f\n",person1.salary);

    printf("\n\nEnter person2 information:\n");

    printf("\nEnter age= ");
    scanf("%d",&person2.age);
    printf("Enter salary= ");
    scanf("%f",&person2.salary);

    printf("\n Information of peron 2 is:\n");
    printf("Age= %d\n",person2.age);
    printf("Salary= %f\n",person2.salary);

    person3=person2;

    printf("\n Information of peron 3 is:\n");
    printf("Age= %d\n",person3.age);
    printf("Salary= %f\n",person3.salary);

    return 0;
}
