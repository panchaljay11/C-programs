#include<stdio.h>
#define N 100
 int main()
 {
    int a[N];
    int b[N];
    int i,n,k=0;
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
        b[k]=a[i];
        k++;
     }                               
    }
    printf("\nAfter");
    for(i=0;i<k;i++)
    {
    printf("\n %d ",b[i]);                           
    }                          
    } 