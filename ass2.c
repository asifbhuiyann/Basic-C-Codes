#include<stdio.h>
main()
{
    int i,age,count;
    count=0;
    while(i<15)
    {
        printf("\nEnter age of persons:",i);
        scanf("%d",&i);
        i++;

        printf("age");
        scanf("d",&age);

        if((age>=60)||(age<=40))
        count++;
        else
            continue;
    }
    printf("number is %d",count);
    return 0;
}

