#include<stdio.h>

struct student
{
    int sid;
    char sname[20];
    int eng_mark,hindi_mark;
};

 int main()
{
    struct student s[100];
    int no,i,total;
    printf("\nenter limit =>");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        printf("\nenter student id =>");
        scanf(" %d",&s[i].sid);

        fflush(stdin);
        printf("\nenter student name =>");
        gets(s[i].sname);

        printf("\nenter eng marks =>");
        scanf(" %d",&s[i].eng_mark);

        printf("\nenter hindi marks =>");
        scanf(" %d",&s[i].hindi_mark);
    }
      printf("\nstudnetId\tstudnetname\teng mark\thindi mark\ttotal");
    printf("\n===================================================");
    
    
    for(i=0;i<no;i++)
    {
        total=s[i].eng_mark+s[i].hindi_mark;
        if(total<50)
        {
        printf("\n%d\t%s\t%d\t%d\t%d\tfailll",s[i].sid,s[i].sname,s[i].eng_mark,s[i].hindi_mark,s[i].eng_mark+s[i].hindi_mark);    
        }       
    }
    
    printf("\n====================================================");

}

