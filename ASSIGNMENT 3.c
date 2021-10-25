#include<stdio.h>
#include<string.h>
struct BarcelonaPlayer
{
    char Name[50];
    int Age;
    char Country[50];
    char Position[50];
    double Salary;
    double Rating;
};
void highestPaidPlayer(struct BarcelonaPlayer *p1, int size);
void findPlayer(struct BarcelonaPlayer *p1, int size);

int main()
{
    int x,i,j;
    printf("INPUT THE TOTAL NUMBER OF PLAYERS :\n");
    scanf("%d",&x);
    struct BarcelonaPlayer a[x];
    for(i=0;i<x;i++)
    {
        getchar();
        printf("Input name:\n");
        gets(a[i].Name);
        printf("Input country:\n");
        gets(a[i].Country);
        printf("Input position:\n");
        gets(a[i].Position);
        printf("Input age:\n");
        scanf("%d",&a[i].Age);
        printf("Input salary:\n");
        scanf("%lf",&a[i].Salary);
        printf("Input rating:\n");
        scanf("%lf",&a[i].Rating);
        printf("ENTER THE NEXT PLAYERS NAME:\n\n");
    }

    for(j=0;j<x;j++)
    {
        printf("Name:%s\n",a[j].Name);
        printf("Country:%s\n",a[j].Country);
        printf("Position:%s\n",a[j].Position);
        printf("Age:%d\n",a[j].Age);
        printf("Salary:%lf\n",a[j].Salary);
        printf("Rating:%lf\n\n\n",a[j].Rating);
    }

    highestPaidPlayer(a, x);

    findPlayer(a, x);
    return 0;
}

void highestPaidPlayer(struct BarcelonaPlayer *p1, int size)
{
    double highest;
    int i;
    char name[20];
    highest=0;
    for(i=0;i<size;i++)
    {
        if(p1[i].Salary>=highest)
        {
            highest=p1[i].Salary;
            strcpy(name,p1[i].Name);
        }
    }
    printf("THE HIGHEST PAID PLAYER IS %s\n\n\n",name);
}

void findPlayer(struct BarcelonaPlayer *p1, int size)
{
    int i;
    for(i=0;i<size;i++)
    {
     if(strcmp(p1[i].Country,"Argentina")==0)
     {
         printf("The Player of Argentina is:");
         printf("%s", p1[i].Name);
     }
    }
    return 0;
}
