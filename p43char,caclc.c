#include<stdio.h>
 main()
 {
    char ch;
    int no1,no2;
    
     printf("\nenter + for add");
     printf("\nenter - for sub");
     printf("|nenter * for mult");
     printf("\nenter / for div");
     printf("\nenter opt =>");
     scanf("%c",&ch);
     switch(ch)
 {
    case '+':    
     printf("nenter no1=>");
     scanf("%d",&no1);
     printf("\nenter no2=>");
     scanf("%d",&no2);
     printf("\nadd=%d",no1+no2);
        break;
    case '-':     
     printf("\nenter no1=>");
     scanf("%d",&no1);
     printf("\nenter no2=>");
     scanf("%d",&no2);
     printf("\nsub=%d",no1-no2);
        break;   
    case '*':    
     printf("\nenter no1=>");
     scanf("%d",&no1);
     printf("\nenter no2=>");
     scanf("%d",&no2);
     printf("\nmult=%d",no1*no2);      
        break;
    case '/':            
     printf("\nenter no1=>");
     scanf("%d",&no1);
     printf("\nenter no2=>");
     scanf("%d",&no2);
     printf("\ndiv=%d",no1/no2);
     default:
    printf("\n wrong option");
 }  
    
 }