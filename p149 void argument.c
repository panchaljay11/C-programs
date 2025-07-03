#include<stdio.h>

void add(int no1,int no2) //function with argument
{
  
    printf("\nadd=%d",no1+no2);  
}
void sub(int no1,int no2)
{
    
    printf("\nsub=%d",no1-no2); 
}
void mult(int no1,int no2)
{
   
    printf("\nmult=%d",no1*no2); 
}
void div(int no1,int no2)
{
    
    printf("\nmult=%d",no1%no2);
}
main()
{
    int no1,no2;
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    add(no1,no2);
    sub(no1,no2);
    mult(no1,no2);
    div(no1,no2);
}
