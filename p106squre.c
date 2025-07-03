#include<stdio.h>
 int main()
 {
    int a[7]={10,33,22,23,12,45,67};
    int b[7];
    int i,n=7;
    
    for(i=0;i<n;i++)
    {
     b[i]=a[i]*a[i];                               
    }
    printf("\nAfter");
    for(i=0;i<n;i++)
    {
    printf("\n %d = %d",a[i],b[i]);                           
    }                          
    }