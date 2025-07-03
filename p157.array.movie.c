#include<stdio.h>

struct movie
{
    int mid;
    char mname[20];
    int year;
};

 int main()
{
    struct movie m[100];
    int no,i;
    printf("\nenter limit =>");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        printf("\nenter movie id =>");
        scanf("%d",&m[i].mid);

        fflush(stdin);
        printf("\nenter movie name =>");
        gets(m[i].mname);

        printf("\nenter movie reales year =>");
        scanf("%d",&m[i].year);
    }
      printf("\nmovieId\tmoviename\tyear");
    printf("\n==============================");
    
    for(i=0;i<no;i++)
    {
        printf("\n%d\t%s\t%d",m[i].mid,m[i].mname,m[i].year);
    }
    printf("\n===============================");
}

