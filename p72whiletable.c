#include<stdio.h>
 main()
 {
    int i;
    int n;

    printf("enter limit=>");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
    printf("\n%d X %d = %d",n,i,i*n);
    i++;
    }

 }

