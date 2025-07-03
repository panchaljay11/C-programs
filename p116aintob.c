#include<stdio.h>
#define N 100
 int main()
 {
    int a[N];
    int b[N];
    int i,n=7;
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
        printf("\nenter value of b[%d]=>",i+1);
        scanf(" %d",&b[i]);
    }    
    for(i=0;i<n;i++)
    {
     b[i]=a[i];                               
    }
    printf("\nAfter");
    for(i=0;i<n;i++)
    {
    printf("\n %d ",b[i]);                           
    }                       
    } 