#include<stdio.h>
struct employe
 {
   int enumber;
   char ename[20];
   int salary;
   
 };
 main()
 {
    struct employe e1,e2,e3;

    printf("\nenter 1 employee number =>");
    scanf("%d",&e1.enumber);

    fflush(stdin);
    printf("\nenter 1 employee name=>");
    gets(e1.ename);

    printf("\nenter 1 employee salary=>");
    scanf("%d",&e1.salary);

     printf("\nenter 2 employee number =>");
    scanf("%d",&e2.enumber);

    fflush(stdin);
    printf("\nenter 2 employee name=>");
    gets(e2.ename);

    printf("\nenter 2  employee salary=>");
    scanf("%d",&e2.salary);

     printf("\nenter 3 employee number =>");
    scanf("%d",&e3.enumber);

    fflush(stdin);
    printf("\nenter 3 employee name=>");
    gets(e3.ename);

    printf("\nenter 3 employee salary=>");
    scanf("%d",&e3.salary);

   
    printf("\ne1's enumber = %d ename = %s salary = %d",e1.enumber,e1.ename,e1.salary);
    printf("\ne2's enumber = %d ename = %s salary = %d",e2.enumber,e2.ename,e2.salary);
    printf("\ne3's enumber = %d ename = %s salary = %d",e3.enumber,e3.ename,e3.salary);

} 