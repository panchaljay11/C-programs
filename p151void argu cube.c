#include<stdio.h>

void cube(int no1)
{ 
   
    printf("\ncube=%d",no1*no1*no1);
}
void max2(int no1,int no2)
{
    if(no1>no2)
    {
        printf("\nno1 is max");
    }
    else
    {
        printf("\nno2  is max");
    }   
}
main()
{
    int no1,no2;
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    cube(no1);
    max2(no1,no2);
}