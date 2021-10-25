#include<stdio.h>
#include<string.h>
struct person{
char name[100];
int age;
double salary;
};

void display(struct person p)
{
    printf("\n\nName: %s\n",p.name);
    printf("Age: %d\n",p.age);
    printf("Salary: %0.2lf\n",p.salary);
}
int main()
{
    struct person person1,person2;

    strcpy(person1.name,"Asif Bhuiyan");
    person1.age=20;
    person1.salary=10000.00;
    display(person1);

    strcpy(person2.name,"Sunjida");
    person2.age=10;
    person2.salary=5000.00;
    display(person2);

    return 0;

}
