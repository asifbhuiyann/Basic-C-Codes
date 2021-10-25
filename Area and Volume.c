#include<stdio.h>
#include<math.h>
 findArea(int radius);
 findVolume(int radius);
main()
{
    float x;
    printf("Enter radius\n");
    scanf("%f",&x);
    findArea(x);
    findVolume(x);
}
findArea(int radius)
{
    float area;
    area=3.14*(pow(radius,2));
    printf("%f\n",area);
}
findVolume(int radius)
{
 float vol;
 vol=4/3*3.14*pow(radius,3);
 printf("%f",vol);
}
