#include<stdio.h>
#define N 100
  int main()
 {
    int a[N];
    int i,n,c1=0,c2=0,s1=0,s2=0;
    printf("\nenter limit=>");
    scanf("%d",&n);
    printf("\nenter values=>");
    for(i=0;i<n;i++)
    {
    
        printf("\nenter value of a[%d]=>",i+1);
        scanf(" %d",&a[i]);
    }
        for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\n%d is even ",a[i]);
            c1+=1;
            s1+=a[i];
        }       
        else
        {
            printf("\n%d is odd",a[i]);        
        
        c2+=1;
        s2+=a[i];
        }       
    }
            printf("\ncount of even total=%d",c1);
            printf("\ncount of odd total=%d",c2);
            printf("\nsum of even total=%d",s1);
            printf("\nsum of odd total=%d",s2);
 }