#include<stdio.h>
struct garment{
char name[20];
char post_of_work[20];
char residence_area[20];
int age;
int family_members;
float salary;
};
void take_input(struct garment []);
void print_input(struct garment []);
int main()
{

    struct garment workers[300];
    take_input(workers);
    print_input(workers);

}
void take_input(struct garment workers[])
{
    int i;
   for(i=0;i<300;i++)
   {
    gets(workers[i].name);
    gets(workers[i].post_of_work);
    gets(workers[i].residence_area);
    fflush(stdin);
    scanf("%d",&workers[i].age);
    scanf("%d",&workers[i].family_members);
    scanf("%f",&workers[i].salary);
    fflush(stdin);
   }

}

void print_input(struct garment workers[])
{
    int i;
    for(i=0;i<300;i++)
    {
    puts(workers[i].name);
    puts(workers[i].post_of_work);
    puts(workers[i].residence_area);
    printf("%d",workers[i].age);
    printf("%d",workers[i].family_members);
    printf("%f",workers[i].salary);
    }

}
