//A structure which will store info of 20 volunteers. You can add a volunteer ,can remove a volunteer and can search a volunteer by using his id. All are given in this code.
#include <stdio.h>
#include <string.h>
struct vol{
    char name[40];
    int age;
    char mobile[11];
    char address[100];
    int id;
    char profession[20];
};
void add_vol(int *n,struct vol *temp){
    printf("Volunteer #%d\n",*n+1);
        printf("Enter the name: ");
        gets(temp->name);
        printf("Enter the age: ");
        scanf("%d",&temp->age);
        fflush(stdin);
        printf("Enter the mobile number (11 characters): ");
        gets(temp->mobile);
        printf("Enter the identification number: ");
        scanf("%d",&temp->id);
        fflush(stdin);
        printf("Enter his/her profession: ");
        gets(temp->profession);
        printf("\n");
        *n++;
}
int search_vol(struct vol *arr, int n){
    int i,take;
    printf("Enter the ID: ");
    scanf("%d",&take);
    fflush(stdin);
    for(i=0;i<20+n;i++){
        if((arr+i)->id==take){
            printf("Volunteer Found!");
            printf("\nName: %s\nAge: %d\nContact: %s\nAddress: %s\nProfession: %s\n",(arr+i)->name,(arr+i)->age,(arr+i)->mobile,(arr+i)->address,(arr+i)->profession);
            break;
        }
    }
    return i;
}
void delete_vol(struct vol *arr,int n){
    int find;
    find=search_vol(arr,n);
    (arr+find)->age=0;
    strcpy((arr+find)->name,"");
    strcpy((arr+find)->mobile,"");
    strcpy((arr+find)->address,"");
    strcpy((arr+find)->profession,"");
    (arr+find)->id=0;
}
int main(){
    struct vol ini[40];
    int limit=0,option,result;
    int i;
    FILE *f;
    printf("\t\tVolunteer Management\n\n");
    again:
    printf("\nType the number of the menu you want to execute\n\n1. Add a volunteer\n2. Delete a volunteer\n3. Search a volunteer\n4. Show information of a volunteer\n\nYour choice: ");
    scanf("%d",&option);
    fflush(stdin);
    switch(option){
    case 0:
        return 0;
    case 1:
        add_vol(&limit,&ini[limit]);
        break;
    case 2:
        result=search_vol(ini,limit);
        break;
    case 3:
        delete_vol(ini,limit);
        break;
    case 4:
        f=fopen("Volunteer.txt","w");
        for(i=0;i<20+limit;i++){
            if(ini[i].age==0){
                continue;
            }
            fprintf(f,"%s\n%d\n%s\n%s\n%d\n%s\n",ini[i].name,ini[i].age,ini[i].mobile, ini[i].address,ini[i].id,ini[i].profession);
        }
        fclose(f);
        return 0;
        break;
    }
    goto again;
}
