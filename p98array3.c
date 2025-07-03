#include<stdio.h>
 main()
 {
    int a[5]={33,22,23,12,45};
    int i,n=5;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
         printf("\n%d is even ",a[i]);
        }
        else
        {
        printf("\n%d is odd",a[i]);
        }

    }

 }