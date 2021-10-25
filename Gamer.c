

//Done by Fahimul Gaffar :)
//Hope you like it :)


#include<stdio.h>
#include<string.h>


struct gamer
{
    int number_of_favorite_games;
    char list_of_favorite_games[30];
};


int main()

{
    int i,j,k,l,m,n,o,p,q,r,s,x,count=0;

    struct gamer a[5][10];

    for(i=0;i<5;i++)
    {

        printf("Please Enter the number of favorite games\n");
        scanf("%d",&x);
        getchar();
        printf("Please enter the %d game names\n",x);
        a[0][i].number_of_favorite_games=x;

        for(j=0;j<x;j++)
        {
            scanf("%s",a[i][j].list_of_favorite_games);
            count++;
        }

    }


char store[count][30];

m=0;

    for(k=0;k<5;k++)
    {

        for(l=0;l<a[0][k].number_of_favorite_games;l++)
        {
            strcpy(store[m],a[k][l].list_of_favorite_games);
            m++;

        }

    }

int no[count];


    for(q=0;q<count;q++)

    {
        no[q]=1;
    }


    for(o=0;o<count;o++)
    {

        for(p=0;p<count;p++)
        {

            if(o!=p && strcmp(store[o],store[p])==0)

            {
                no[o]=no[o]+1;


                for(r=p;r<count;r++)
                {
                    strcpy(store[r],store[r+1]);
                }

                count--;
            }

        }

    }


    printf("\n\nThe Name of the Games and the ranking is given:\n\n");


    for(s=count;s>0;s--)
    {

        for(p=0;p<count;p++)
        {

            if(no[p]>=s)
            {
                printf("%s\n%d\n\n",store[p],no[p]);
                no[p]=0;
            }

        }

    }

}
