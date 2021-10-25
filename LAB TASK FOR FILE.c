#include<stdio.h>
typedef struct student
{
char name[50];
int id;
char dept[50];
double cgpa;
};
int main()
{
    FILE *fp;
    int i,j,k;
    fp=fopen("//Users//asifbhuiyan//Desktop//Programs//Input.txt","r");
    if(fp!=NULL)
    {
         printf("Enter the number of students:\n");
         scanf("%d",&k);
         getchar();
         struct student a[k];
        for(i=0;i<k;i++)
        {
            fgets(a[i].name, 50, fp);
            fscanf(fp,"%d",&a[i].id);
            getc(fp);
            fgets(a[i].dept, 20, fp);
            fscanf(fp,"%lf",&a[i].cgpa);
            getc(fp);
        }
    }
    struct student a[k];
    fclose(fp);
    for(j=0;j<k;j++)
    {
        printf("Name:%s\nId:%d\nDepartment:%s\nCGPA:%lf\n\n",a[j].name,a[j].id,a[j].dept,a[j].cgpa);
    }
}
