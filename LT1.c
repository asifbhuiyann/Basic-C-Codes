#include<stdio.h>
#include<string.h>
#include<windows.h>
typedef struct
{
    char names[50];
    int id;
    char dept[20];
    double cgpa;

}students;
void printbydept(char *deptname, students allstudents[], int size)
{
    int i;
    char s[20];
    strcpy(s,deptname);


    for(i=1;i<size;i++)
    {
        if(strcasecmp(allstudents[i].dept,s)==0)
            printf("%s, %d ,%s ,%.1lf\n",allstudents[i].names,allstudents[i].id,allstudents[i].dept,allstudents[i].cgpa);
    }
}
void savebydept(char *filename, char *deptname, students allstudents[], int size)
{
    int i;
    char s[20],f[10];

    strcpy(s,deptname);

    for(i=1;i<size;i++)
    {
        if(strcasecmp(allstudents[i].dept,s)==0)
            fprintf(filename,"name:%s,ID: %d ,dept: %s ,CGPA: %.1lf\n",allstudents[i].names,allstudents[i].id,allstudents[i].dept,allstudents[i].cgpa);

    }

}
main()
{   students s[6];
     int i;
     char dpt[20];
    FILE *fp;
    fp=fopen("input.csv","r");
    for(i=1;i<=5;i++)
    {
        fscanf(fp," %[^\n]",&s[i].names);
        fscanf(fp," %d",&s[i].id);
        getc(fp);
        fscanf(fp," %[^\n]",&s[i].dept);
        fscanf(fp," %lf", &s[i].cgpa);
        getc(fp);
    }
fclose(fp);
    for(i=1;i<=5;i++)
    {
        printf("%s, %d ,%s ,%.1lf\n",s[i].names,s[i].id,s[i].dept,s[i].cgpa);
    }
    printf("\n");
    getchar();
    system("cls");
    printf("enter the department name you want to search: ");
    scanf(" %s",dpt);
    printbydept(dpt,s,6);
    FILE *fpt;
    fpt=fopen("studentinfo.txt","w");
    savebydept(fpt,dpt,s,6);
    fclose(fpt);

}
