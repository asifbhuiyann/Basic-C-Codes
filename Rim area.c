
#include<stdio.h>
#include<math.h>
main()
{
    double rim_area,d1,d2,x,y;
    printf("Enter value \n");
    scanf("%lf%lf",&d1,&d2);
    x=d1/2;
    y=d2/2;
    rim_area=3.14*pow(y,2)-3.14*pow(x,2);
    printf("%lf",rim_area);
    return 0;
}
