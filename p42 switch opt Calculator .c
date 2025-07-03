#include<stdio.h>
 main()
 {
    int no1,no2;
    int opt;

    printf("\nenter 1 for add");
    printf("\nenter 2 for sub");
    printf("\nenter 3 for mult");
    printf("\nenter 4 for div");
    printf("\nenter opt =>");
    scanf("%d",&opt);
    switch (opt)   
    {
    case 1:
      printf("nenter no1=>");
      scanf("%d",&no1);
      printf("\nenter no2=>");
      scanf("%d",&no2);
      printf("\nadd=%d",no1+no2);
        break;
    case 2:
      printf("\nenter no1=>");
      scanf("%d",&no1);
      printf("\nenter no2=>");
      scanf("%d",&no2);
      printf("\nsub=%d",no1-no2);
        break;
    case 3:
      printf("\nenter no1=>");
      scanf("%d",&no1);
      printf("\nenter no2=>");
      scanf("%d",&no2);
      printf("\nmult=%d",no1*no2);
        break;
    case 4:
      printf("\nenter no1=>");
      scanf("%d",&no1);
      printf("\nenter no2=>");
      scanf("%d",&no2);
      printf("\ndiv=%d",no1/no2);
        break;
        default:
      printf("\n wrong option");  
    }

 }