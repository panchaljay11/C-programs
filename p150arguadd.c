#include<stdio.h>
void add(no1,no2,no3,no4,no5)
{
    printf("\nadd=%d",no1+no2+no3+no4+no5);
}
main()
{
    int no1,no2,no3,no4,no5;
    printf("\nenter no1=>");
    scanf("%d",&no1);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    printf("\nenter no2=>");
    scanf("%d",&no2);
    printf("\nenter no3=>");
    scanf("%d",&no3);
    printf("\nenter no4=>");
    scanf("%d",&no4);
    printf("\nenter no5=>");
    scanf("%d",&no5);

    add(no1,no2,no3,no4,no5);
}