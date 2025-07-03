#include<stdio.h>
 main()
 {
    int no1,no2;
    int opt;
    do
   {
    printf("\nenter 1 for add");
    printf("\nenter 2 for sub");
    printf("|nenter 3 for mult");
    printf("\nenter 4 for div");
    printf("\nenter 5 for exit");
    printf("\nenter opt =>");
    scanf("%d",&opt);

    if(opt==1)
    {
        printf("nenter no1=>");
        scanf("%d",&no1);
        printf("\nenter no2=>");
        scanf("%d",&no2);
        printf("\nadd=%d",no1+no2);
    }
    else if(opt==2)
    {
        printf("\nenter no1=>");
        scanf("%d",&no1);
        printf("\nenter no2=>");
        scanf("%d",&no2);
        printf("\nsub=%d",no1-no2);
    }
    else if(opt==3)
    {
        printf("\nenter no1=>");
        scanf("%d",&no1);
        printf("\nenter no2=>");
        scanf("%d",&no2);
        printf("\nmult=%d",no1*no2);
    }
    else if(opt==4)
    {
        printf("\nenter no1=>");
        scanf("%d",&no1);
        printf("\nenter no2=>");
        scanf("%d",&no2);
        printf("\ndiv=%d",no1/no2);
    }
    else if(opt==5)
    {
        printf("\nexit");  
    }
    else
    {
        printf("\nwrong opt");
    }
  }while(opt!=5);

  }