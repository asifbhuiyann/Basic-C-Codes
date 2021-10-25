#include<stdio.h>
#define MAX 5
int main()
{
    char grid[MAX][MAX]={{'*',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},{' ',' ',' ',' ',' '},};
    int i,j,r=0,c=0,k;
    char a;

for (i=0;i<5;i++)
{
for(j=0;j<5;j++)
  {printf("%c",grid[i][j]);
  if(j==4)
    printf("\n");
    }
  }
  for(k=0;k<100;k++)
  {
printf("enter u/d/l/r=");
  scanf("%c",&a);
  if(c==0 && a=='l')
  {
    printf("error");

  }
   if(r==0 && a=='u')
  {
    printf("error");

  }
    if(a=='r')
  {
  c=c+1;
     grid[r][c-1]=' ';
      grid[r][c]='*';
  for (i=0;i<5;i++)
{
for(j=0;j<5;j++)
  {printf("%c",grid[i][j]);
  if(j==4)
    printf("\n");
    }
  }
}

    if(a=='d')
  {
  r=r+1;
     grid[r-1][c]=' ';
      grid[r][c]='*';
  for (i=0;i<5;i++)
{
for(j=0;j<5;j++)
  {printf("%c",grid[i][j]);
  if(j==4)
    printf("\n");
    }
  }
}
    if(a=='u')
  {
  r=r-1;
     grid[r+1][c]=' ';
      grid[r][c]='*';
  for (i=0;i<5;i++)
{
for(j=0;j<5;j++)
  {printf("%c",grid[i][j]);
  if(j==4)
    printf("\n");
    }
  }
}    if(a=='l')
  {
  c=c-1;
     grid[r][c+1]=' ';
      grid[r][c]='*';
  for (i=0;i<5;i++)
{
for(j=0;j<5;j++)
  {printf("%c",grid[i][j]);
  if(j==4)
    printf("\n");
    }
  }
}
  }
    return 0;
}
