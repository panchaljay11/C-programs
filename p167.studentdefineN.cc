#include<stdio.h>
#define N 5
struct student
{
    int sno;
    char sname[20];
    int eng,hindi;
};  
int main( )
{
  struct student s[N];
  int i;

  for(i=0;i<N;i++)
  {
    printf("\nenter sno =>");
    scanf("%d",&s[i].sno);

    fflush(stdin);
    printf("\nenter sname =>");
    gets(s[i].sname);

    printf("\nEntr english and hindi marks =>");
    scanf("%d %d",&s[i].eng,&s[i].hindi);
  }

  printf("\nNo\tName\tEnglish\thindi\Total");

  printf("\n=====================================");
  for(i=0;i<N;i++)
  {
    printf("\n%d\t%s\t%d\t%d\t%d",s[i].sno,s[i].sname,s[i].eng,s[i].hindi,s[i].eng+s[i].hindi);
  }

}