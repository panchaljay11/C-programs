#include<stdio.h>
 int main()
 {
    int a[7]={10,-33,-22,23,12,-45,67};
    int i,n=7,c1=0,c2=0,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("\n%d is positive ",a[i]);
            c1+=1;
            s1+=a[i];
        }       
        else
        {
            printf("\n%d is negative",a[i]);        
        
        c2+=1;
        s2+=a[i];       
        }
    }
            printf("\ncount of positive total=%d",c1);
            printf("\ncount of neagative total=%d",c2);
            printf("\ncount of positive total=%d",s1);
            printf("\ncount of negative total=%d",s2);
 
 }