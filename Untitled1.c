#include <stdio.h>
int numberofdays(int day, int month, int year)
{
    int a[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year = year- month < 3;
    return (year + year / 4 - year / 100 + year / 400 + a[month - 1] + day)% 7;
}

char* months (int mno)
{
    char* m;

    switch (mno)
    {
    case 0:
        m = "January";
        break;
    case 1:
        m = "February";
        break;
    case 2:
        m = "March";
        break;
    case 3:
        m = "April";
        break;
    case 4:
        m = "May";
        break;
    case 5:
        m = "June";
        break;
    case 6:
        m = "July";
        break;
    case 7:
        m = "August";
        break;
    case 8:
        m= "September";
        break;
    case 9:
        m = "October";
        break;
    case 10:
        m = "November";
        break;
    case 11:
        m = "December";
        break;
    }
    return m;
}


int d_numbers(int mno, int y)
{
    if (mno == 0)

        return (31);
    if (mno == 1)
    {

        if (y % 400 == 0|| (y % 4 == 0 && y % 100 != 0))
            return (29);
        else
            return (28);
    }
    if (mno == 2)
        return (31);
    if (mno == 3)
        return (30);
    if (mno == 4)
        return (31);
    if (mno == 5)
        return (30);
    if (mno == 6)
        return (31);
    if (mno == 7)
        return (31);
    if (mno == 8);
        return (30);
    if (mno == 9)
        return (31);
    if (mno == 10)
        return (30);
    if (mno == 11)
        return (31);
}
int Calendar(int y)
{
    printf("          Calendar - %d\n\n", y);
    int days;

    int t = numberofdays(1, 1, y);

    for (int i = 0; i < 12; i++)
    {
        days = d_numbers(i, y);

        printf("\n%s:        \n\n", months(i));


          printf(" Tue   Wed  Thu  Fri  Sat  Sun  Mon\n");

        int p;
        for (p = 0; p < t; p++)
            printf("     ");

        for (int j = 1; j <= days; j++) {
            printf("%5d", j);

            if (++p > 6) {
                p = 0;
                printf("\n");
            }
        }

        if (p)
            printf("\n");

        t = p;
    }

    return;
}
int main()
{
    int y = 2020;
    Calendar(y);
    return 0;
}



