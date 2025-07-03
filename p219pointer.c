#include<stdio.h>
main()
{
int a,*b;
a=30;
b=&a;
printf("\n A=%d B=%d",a,*b);
*b=70;
printf("\n A=%d B=%d",a,*b);
a=500;
printf("\n A=%d B=%d",a,*b);
*b=900;
printf("\n A=%d B=%d",a,*b);
}