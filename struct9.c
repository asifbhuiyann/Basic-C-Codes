#include <stdio.h>
struct Person
{
    char name[100];
   int age;
   float salary;

};
int main()
{
    struct Person person[5];
    int i;
for(i=0;i<5;i++)
{
    printf("Enter information of person %d :\n",i+1);
    printf("Enter name = ");
    fflush(stdin);
    gets(person[i].name);
    printf("\nEnter age = ");
    scanf("%d",&person[i].age);
    printf("\nEnter salary = ");
    scanf("%f",&person[i].salary);
    printf("\n\n");
}

    for(i=0;i<5;i++)
    {
    printf("\n Information of peron %d is:\n",i+1);
    printf("Name=%s\n",person[i].name);
    printf("Age= %d\n",person[i].age);
    printf("Salary= %f\n",person[i].salary);
    }

    return 0;
}


