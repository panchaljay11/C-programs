#include<stdio.h>
#define N 1

struct student
{
    int rollno;
    char sname[20];
    char saddress[50];
    int c_marks,html_marks,pcs_marks,total;
};

 int main()
{
    struct student s[N];
    int i;
   
    for(i=0;i<N;i++)
    {
        printf("\nEnter student rollno =>");
        scanf(" %d",&s[i].rollno);

        fflush(stdin);
        printf("\nEnter student name =>");
        gets(s[i].sname);

        fflush(stdin);
        printf("\nEnter Student Address =>");
        gets(s[i].saddress);

        printf("\nEnter c_marks =>");
        scanf("%d",&s[i].c_marks);

        printf("\nEnter html_marks =>");
        scanf(" %d",&s[i].html_marks);

        printf("\nEnter pcs_marks =>");
        scanf(" %d",&s[i].pcs_marks);
    }
     
      printf("\n====================================================================");
    
    for(i=0;i<N;i++)
    {
    printf("\nRollNo = %d\nName = %s\nAddress = %s\nC_marks = %d\nHtml_marks = %d\nPcs_marks = %d\nTotal = %d",s[i].rollno,s[i].sname,s[i].saddress,s[i].c_marks,s[i].html_marks,s[i].pcs_marks,s[i].c_marks+s[i].html_marks+s[i].pcs_marks);
    }
    printf("\n======================================================================");
}
