#include<stdio.h>
 main()
 {
    int a[7]={11,55,9,2}; 
    int i,n=7;
    for(i=0;i<n;i++)
    {
        if(a[i]%5==0)
        {
            printf("\n%d",a[i]);
        }

    }

 }