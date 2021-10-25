#include<stdio.h>
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1;
    person1.age=20;
    person1.salary=12222.00;
    printf("Age: %d\n",person1.age);
    printf("Salary: %f",person1.salary);
    return 0;
}
