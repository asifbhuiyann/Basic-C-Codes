#include<stdio.h>
struct student
{
char name[50];
int id;
char dept[20];
double cgpa;
};

int main()
{

    FILE *fh;
    int x,i,j;
    fh=fopen("//Users//hossainulgaffar//Desktop//Programs//Input.txt","r");
    if(fh!=NULL)
    {
         printf("Enter the number of students in the file\n");
         scanf("%d",&x);
         getchar();
         struct student a[x];
        for(i=0;i<x;i++)
        {
            fgets(a[i].name, 50, fh);
            fscanf(fh,"%d",&a[i].id);
            getc(fh);
            fgets(a[i].dept, 20, fh);
            fscanf(fh,"%lf",&a[i].cgpa);
            getc(fh);
        }
    }
    struct student a[x];
    fclose(fh);
    for(j=0;j<x;j++)
    {
        printf("Name:%s\nI'd:%d\nDepartment:%s\nCGPA:%lf\n\n",a[j].name,a[j].id,a[j].dept,a[j].cgpa);
    }
}
