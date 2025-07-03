#include<stdio.h>
 int main()
 {
    int a[7]={10,-33,-22,23,12,-45,67};
    int i,n=7;
    
    for(i=0;i<n;i++)
    {
            printf(" %d ",a[i]);                           
    }
    printf("\nAfter\n");
    for(i=0;i<n;i++)
    {
            printf(" %d ",a[i]*-1);                           
    } 
 }


