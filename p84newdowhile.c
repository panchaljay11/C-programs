#include<stdio.h>
 main()
 {
    int no,op;
    
    printf("\nenter 1 for squre");
    printf("\nenter 2 for cube");
    printf("\nenter opt =>");
    scanf("%d",&op);

    if(op==1)
    {
    printf("nenter no=>");
    scanf("%d",&no);

    printf("\nsqure=%d",no*no);
    }
    else if(op==2)
    {
    printf("\nenter no=>");
    scanf("%d",&no);

    printf("\ncube=%d",no*no*no);
    }
    else
    {
        printf("\nwrong option");
    }
 }
