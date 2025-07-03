#include<stdio.h>
main()
{
    char opt;
    int no1,no2;
                                                          
    printf("\nenter + for add");
    printf("\nenter - for sub");
    printf("\nenter * for mult");
    printf("\nenter / for div");
    printf("\nenter opt =>");
    scanf("%c",&opt);

    if(opt=='+')
  {
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    printf("\nadd=%d",no1+no2);
  }
    else if(opt=='-')
  {
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    printf("\nsub=%d",no1-no2);
  }
    else if(opt=='*')
  {
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    printf("\nmult=%d",no1*no2);
  }
    else if(opt=='/')
  {
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    printf("\ndiv=%d",no1/no2);
  }
    else
  {
    printf("\n wrong option");
  } 
}
