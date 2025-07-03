#include<stdio.h>
main()
{
int a,b;
int *ptra,*ptrb;
a=30;
b=2;
ptra=&a;
ptrb=&b;

printf("\nAdd = %d",*ptra + *ptrb);
printf("\nSub = %d",*ptra - *ptrb);
printf("\nMulti = %d",*ptra * *ptrb);
printf("\nDiv = %d",*ptra / *ptrb);
}
