#include<stdio.h>
 main()
 {
    int a[7]={10,33,22,23,12,45,67};
    int i,n=7,c=0,c1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d is even ",a[i]);
            c+=1;
        }       
        else
        {
            printf("\n%d is odd",a[i]);        
        }
        c1+=1;       
    }
            printf("\n count of total=%d",c1);
 }