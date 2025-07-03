#include<stdio.h>
#define N 100
  int main()
 {
    int a[N];
    int i,n,c=0,c1=0;
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