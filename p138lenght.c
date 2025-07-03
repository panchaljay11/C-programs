#include<stdio.h>
 main()
 {
    char name1[200];
    char name2[200];
    int x,y;

    printf("enter name1=>");
    gets(name1);
    printf("\nenter name2=>");
    gets(name2);
    x=strlen(name1);
    y=strlen(name2);
  
   if(x>y)
   {
    printf("\nName1 is greater");
   }
   else if(y>x)
   {
    printf("\nname2 is grreater");
   }   
 }