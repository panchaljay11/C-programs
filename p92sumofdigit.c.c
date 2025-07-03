#include<stdio.h>
 main()
 {
    int n,remainder,sum=0,y;
    printf("\nenter no=");
    scanf("%d",&n);

    y=n;
    while (n!=0)
    {
    remainder=n%10;
    sum=sum+remainder;   
    n/=10;     
    }   
    printf("sum=%d",sum);      
      
 }
