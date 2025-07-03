#include<stdio.h>

struct employee
{
    int eid;
    char name[20];
    int salary;
};
main()
{
    struct employee e[100];
    int no,i;
    printf("\nenter limit =>");
    scanf("%d",&no);

    for(i=0;i<no;i++)
    {
        printf("\nenter emloyee id =>");
        scanf("%d",&e[i].eid);

        fflush(stdin);
        printf("\nenter employee name =>");
        gets(e[i].name);

        printf("\nenter employee salary =>");
        scanf("%d",&e[i].salary);
    }
    printf("\nemployee id  employee name  employee salary");
    printf("\n================================================");
    for(i=0;i<no;i++)
    {
    printf("\n  %d        %s       %d  ",e[i].eid,e[i].name,e[i].salary);
    }
    printf("\n=================================================");
}