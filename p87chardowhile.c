#include<stdio.h>
 main()
 {
    int no;
    char opt;

    do
    {
    printf("\nenter a for squre");
    printf("\nenter b for cube");
    printf("\nenter x for exit");
    printf("\nenter opt =>");
    fflush(stdin);
    scanf("%c",&opt);

    if(opt=='a')
   {  
    printf("nenter no=>");
    scanf("%d",&no);

    printf("\nsqure=%d",no*no);
   }
    else if(opt=='b')
   {
    printf("\nenter no=>");
    scanf("%d",&no);

    printf("\ncube=%d",no*no*no);
   }
    else if(opt=='x')
   {
    printf("\nexit");
   }
    else
   {
    printf("\nwrong option");
   }
 }while(opt!='x');

 }