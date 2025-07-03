#include<stdio.h>
 main()
 {
    int n,reversed=0,remainder,sum,y;
    

    printf("\nenter no=");
    scanf("%d",&n);

    y=n;
    while (n!=0)
    {
    remainder=n%10;
    sum=sum+(remainder*remainder*remainder);
    n/=10;
    }
    printf("\nreversed number=%d\n",reversed); 
    printf("\nno=%d",y);
       
    if(sum==y)
    {
    printf("\nno is armstrong");
    }
    else
    {
    printf("\nno is not armstrong");
    }
       
 }
