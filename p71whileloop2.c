#include<stdio.h>
 main()
 {
    int i;
    int n;

    printf("enter limit=>");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
     printf("\n%d = %d",i,i*i);
     i++;
    }

 }
 