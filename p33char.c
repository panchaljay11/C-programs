#include<stdio.h>
 main()
 {
    int no;
    char opt;

    printf("\nenter a for squre");
    printf("\nenter b for cube");
    printf("\nenter opt =>");
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
    scanf("%c",&no);

    printf("\ncube=%d",no*no*no);
   }
    else
   {
    printf("\nwrong option");
   }
 }