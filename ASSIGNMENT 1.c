#include<stdio.h>
struct moviestar
{
char n[10];
float r;
int tf;
float tr;
float avg;
};
main()
{
    int n,k,j;
    struct moviestar ms[6];
    for(n=1;n<=5;n++)
    {
        printf("MOVIE STAR NAME %d: ",n);
        scanf("%s",ms[n].n);
        ms[n].tr=0.0;
        ms[n].tf=0;
    }
    printf("ENTER NUMBER OF FANS: ");
    scanf(" %d",&k);
    for(n=1;n<=k;n++)
    {
        printf("ENTER MOVIE SERIAL NUMBER YOU WANT TO RATE: ");
        scanf("%d",&j);
        printf("RATING FOR \"%s\" OF YOURS IS: ",ms[j].n);
        scanf("%f",&ms[j].r);
        ms[j].tr=ms[j].tr+ms[j].r;
        if(ms[j].r>0)
            ms[j].tf++;
    }
    for(n=1;n<=5;n++)
    {
        ms[n].avg=ms[n].tr/ms[n].tf;
        if(ms[n].tr==0)
            ms[n].avg=0;
    }
    for(n=1;n<=5;n++)
        printf("TOTAL FAN OF \"%s\" IS %d\nAVERAGE RATING OF %s IS %.lf\n",ms[n].n,ms[n].tf,ms[n].n,ms[n].avg);
        return 0;

}
